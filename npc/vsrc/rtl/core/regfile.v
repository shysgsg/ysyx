`include "defines.v"

module ysyx_22050368_regfile(
  input  [`RFIDX_WIDTH-1:0] read_src1_idx,   // 读rs1寄存器的索引
  input  [`RFIDX_WIDTH-1:0] read_src2_idx,   // 读rs1寄存器的索引
  output [`XLEN-1:0] read_src1_dat,          // rs1寄存器读到的数据
  output [`XLEN-1:0] read_src2_dat,          // rs2寄存器读到的数据

  input  wbck_dest_wen,                      // 写回使能
  input  [`RFIDX_WIDTH-1:0] wbck_dest_idx,   // 写回寄存器的索引
  input  [`XLEN-1:0] wbck_dest_dat,          // 写回的数据

  output [`XLEN-1:0] x1_r,                   // x1寄存器的值（x1有特殊加速）

  input  clk,                                // 时钟
  input  rst                                 // 复位（低电平有效）
  );

  wire [`XLEN-1:0] rf_r [`RFREG_NUM-1:0];    // 使用二维数组定义寄存器组
  wire [`RFREG_NUM-1:0] rf_wen;              // 寄存器写使能
  
  genvar i;
  generate //{
  
      for (i=0; i<`RFREG_NUM; i=i+1) begin:regfile//{
  
        if(i==0) begin: rf0
            // x0 cannot be wrote since it is constant-zeros
            assign rf_wen[i] = 1'b0;            // x0寄存器不能被写   
            assign rf_r[i] = `XLEN'b0;     // x0寄存器恒为0
        end

        else begin: rfno0
            assign rf_wen[i] = wbck_dest_wen & (wbck_dest_idx == i) ;   // 生成具体的写使能信号
            // 如果使用D触发器的配置，由于此处有明确的Load-enable信号，综合工具会自动插入门控时钟以降低功耗
            sirv_gnrl_dffl #(`XLEN) rf_dffl (rf_wen[i], wbck_dest_dat, rf_r[i], clk);    // 使用D触发器组成寄存器 
        end
  
      end//}

  endgenerate//}
  
  assign read_src1_dat = rf_r[read_src1_idx];   // 读寄存器组读端口1的数据
  assign read_src2_dat = rf_r[read_src2_idx];   // 读寄存器组读端口2的数据

  assign x1_r = rf_r[1];    // x1寄存器特殊加速，不用读
      
endmodule

