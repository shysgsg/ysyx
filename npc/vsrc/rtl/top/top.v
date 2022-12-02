`include "defines.v"

module ysyx_22050368_top(
    input clk,
    input rst,
    input [`InstBus] inst,
    output [`InstAddrBus] pc,
    output success_flag
);

    wire jump_flag;
    wire [63:0] jump_addr;
    wire [2:0] hold_flag;
    wire [4:0] rs1_index;
    wire [4:0] rs2_index;
    wire [4:0] rd_index;
    wire [63:0] rs1;
    wire [63:0] rs2;
    wire [63:0] rd;
    wire rs1_en;
    wire rs2_en;
    wire rd_en;
    wire [`DECINFO_WIDTH-1:0] dec_info_bus;
    wire [63:0] dec_imm;
    
    ysyx_22050368_pc_reg ysyx_22050368_pc_reg1(
        .clk(clk),
        .rst(rst),
        .jump_flag_i(jump_flag),
        .jump_addr_i(jump_addr),
        .hold_flag_i(hold_flag),
        .pc_o(pc)
    );

    ysyx_22050368_idu ysyx_22050368_idu1(
        .inst_i(inst),
        .inst_addr_i(pc),    
        // .rs1_rdata_i(rs1),      
        // .rs2_rdata_i(rs2),      
        
        .inst_o(),
        .dec_info_bus_o(dec_info_bus),
        .dec_imm_o(dec_imm),
        .dec_pc_o(),
        .rs1_raddr_o(rs1_index),
        .rs2_raddr_o(rs2_index),
        // .rs1_rdata_o(rs1),
        // .rs2_rdata_o(rs2),
        .rd_waddr_o(rd_index),
        .rd_we_o(rd_en)
    );

    ysyx_22050368_exu ysyx_22050368_exu1(
        .pc(pc),
        .rs1_en(),
        .rs2_en(),
        .rd_en(rd_en),
        .rs1(rs1),
        .rs2(rs2),
        .dec_imm(dec_imm),
        .dec_info_bus(dec_info_bus),
        .hold_flag_o(hold_flag),
        .jump_flag(jump_flag),
        .jump_addr(jump_addr),
        .wbck_dest_dat(rd)
    );

    ysyx_22050368_regfile ysyx_22050368_regfile1(
        .read_src1_idx(rs1_index),   
        .read_src2_idx(rs2_index),   
        .read_src1_dat(rs1),          
        .read_src2_dat(rs2),          

        .wbck_dest_wen(rd_en),                      
        .wbck_dest_idx(rd_index),   
        .wbck_dest_dat(rd),          

        .x1_r(),                   

        .clk(clk),                                
        .rst(rst)                               
    );

endmodule