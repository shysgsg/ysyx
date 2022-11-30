module ysyx_22050368_idu(
    
    input reg[`InstBus] inst,

    // output dec_rs1x0,                             // 解码出来rs1是x0
    // output dec_rs2x0,                             // 解码出来rs2是x0
    // output dec_rs1en,                             // 解码出来rs1读使能
    // output dec_rs2en,                             // 解码出来rs2读使能
    // output dec_rdwen,                             // 解码出来rd写使能
    // output [`RFIDX_WIDTH-1:0] dec_rs1idx,         // rs1索引
    // output [`RFIDX_WIDTH-1:0] dec_rs2idx,         // rs2索引
    // output [`RFIDX_WIDTH-1:0] dec_rdidx,          // rd索引
    // output [`DECINFO_WIDTH-1:0] dec_info,         // DECINFO_WIDTH为32位，译码信息
    // output [`XLEN-1:0] dec_imm,                   // 译码出的立即数


)