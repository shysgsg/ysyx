
`ifndef FPGA_SOURCE//{
`ifndef DISABLE_SV_ASSERTION//{
//synopsys translate_off
module sirv_gnrl_xchecker # (
  parameter DW = 32
) (
  input  [DW-1:0] i_dat,
  input clk
);

// 注意，下面的代码块应该取消掉注释
CHECK_THE_X_VALUE:
  assert property (@(posedge clk) 
                     ((^(i_dat)) !== 1'bx)
                  )
  else $fatal ("\n Error: Oops, detected a X value!!! This should never happen. \n");

endmodule
//synopsys translate_on
`endif//}
`endif//}
