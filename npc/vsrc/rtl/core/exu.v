`include "defines.v"

module ysyx_22050368_exu(
    input [63:0] pc,
    input rs1_en,
    input rs2_en,
    input rd_en,
    input [63:0] rs1,
    input [63:0] rs2,
    input [63:0] dec_imm,
    input [`DECINFO_WIDTH-1:0] dec_info_bus,
    output [`Hold_Flag_Bus] hold_flag_o,
    output jump_flag,
    output [63:0] jump_addr,
    output [63:0] wbck_dest_dat

);

    wire signbit_OF;
    wire highestbit_OF;
    wire overflow_flag;
    wire zero_flag;
    wire [2:0] mode;
    wire [63:0] alu_op1;
    wire [63:0] alu_op2;
    wire alu_flag;
    wire bjp_flag;
    wire [63:0] alu_wbck_dat;
    wire [63:0] bjp_wbck_dat;

    assign alu_flag = dec_info_bus[`DECINFO_GRP_BUS] == `DECINFO_GRP_ALU;
    assign bjp_flag = dec_info_bus[`DECINFO_GRP_BUS] == `DECINFO_GRP_BJP;

    assign alu_op1 = rs1;
    assign alu_op2 = (rs2 == 0) ? dec_imm : rs2;
    
    ysyx_22050368_alu ysyx_22050368_alu1(
        .en(alu_flag),
        .op1(alu_op1),
        .op2(alu_op2),
        .mode(mode),
        .result(alu_wbck_dat),
        .signbit_OF(signbit_OF),
        .highestbit_OF(highestbit_OF),
        .overflow_flag(overflow_flag),
        .zero_flag(zero_flag)
    );

    ysyx_22050368_bjp ysyx_22050368_bjp1(
        .en(bjp_flag),
        .pc(pc),
        .dec_info_bus(dec_info_bus),
        .rs1(rs1),
        .rs2(rs2),
        .dec_imm(dec_imm),
        .rd(bjp_wbck_dat),
        .jump_flag(jump_flag),
        .jump_addr(jump_addr)
    );

    assign wbck_dest_dat = ({64{alu_flag}} & alu_wbck_dat) | ({64{bjp_flag}} & bjp_wbck_dat);
    
endmodule
