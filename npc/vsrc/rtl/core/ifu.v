`include "defines.v"

// ifu模块
module ysyx_22050368_ifu(

    // input wire clk,
    // input wire rst,

    // input wire jump_flag_i,                 // 跳转标志
    // input wire[`InstAddrBus] jump_addr_i,   // 跳转地址
    // input wire[`Hold_Flag_Bus] hold_flag_i, // 流水线暂停标志
    // input wire jtag_reset_flag_i,           // 复位标志

    input reg[`InstAddrBus] pc,                // PC指针
    output reg[`InstBus] inst                  // 取到的指令

    );

    

   

endmodule
