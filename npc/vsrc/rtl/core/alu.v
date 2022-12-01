module ysyx_22050368_alu(
    input en,
    input [63:0] op1,
    input [63:0] op2,
    input [2:0] mode,
    output [63:0] result,
    output signbit_OF,
    output highestbit_OF,
    output overflow_flag,
    output zero_flag
);

    wire [63:0] result_bus [7:0];
    wire [63:0] result;
    wire [63:0] cmp;

    assign cmp = op1 - op2;

    assign result_bus[0] = op1 + op2;
    assign result_bus[0] = op1 - op2;
    assign result_bus[0] = ~op1;
    assign result_bus[0] = op1 & op2;
    assign result_bus[0] = op1 | op2;
    assign result_bus[0] = op1 ^ op2;
    assign result_bus[0] = cmp[63];
    assign result_bus[0] = op1 == op2;

    mux81 alu_output_mux (result_bus, mode, result);

    assign zero_flag = en & ~(mode[2] | mode[1]) & (result == 64'b0);
    assign signbit_OF = en & op1[63] & op2[63];
    assign highestbit_OF = en & op1[62] & op2[62];
    assign overflow_flag = en & ~(mode[2] | mode[1]) & (highestbit_OF ^ signbit_OF);

    
endmodule