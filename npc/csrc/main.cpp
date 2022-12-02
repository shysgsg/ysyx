#include <stdlib.h>
#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vysyx_22050368_top.h"
// #include "../../nemu/include/memory/vaddr.h"

u_int32_t rom[4096];
u_int8_t ram[65536];

u_int32_t pmem_read(u_int64_t addr, int len) {
    u_int64_t index = (addr - 0x80000000)/4;
    if(index >= 0 && index <= 13)
      return rom[index];
    return 0;
}

u_int32_t pmem_write(u_int64_t addr, int len) {
    u_int64_t index = (addr - 0x80000000)/4;
    if(index >= 0 && index <= 13)
      return rom[index];
    return 0;
}


// 终止时间
#define MAX_SIM_TIME 40
vluint64_t sim_time = 0;

int main(int argc, char** argv, char** env) {
    rom[0] = 0x00000413;
    rom[1] = 0x00009117;
    rom[2] = 0xffc10113;
    rom[3] = 0x00c000ef;
    rom[4] = 0x00000513;
    rom[5] = 0x00008067;
    rom[6] = 0xff010113;
    rom[7] = 0x00000517;
    rom[8] = 0x01c50513;
    rom[9] = 0x00113423;
    rom[10] = 0xfe9ff0ef;
    rom[11] = 0x00050513;
    rom[12] = 0x00100073;
    rom[13] = 0x0000006f;

    // 新建需要仿真的对象
    Vysyx_22050368_top *dut = new Vysyx_22050368_top;

    // 生成仿真波形, "vcd" 文件
    Verilated::traceEverOn(true);
    VerilatedVcdC *m_trace = new VerilatedVcdC;
    dut->trace(m_trace, 5);
    m_trace->open("waveform.vcd");
  
    // while (sim_time < MAX_SIM_TIME) {
    while (dut->inst != 0x00100073) {
        // 翻转时钟
        dut->clk ^= 1;
        dut->eval();
        
        // 仿真 ALU 模型中的所有信号
        dut->inst = pmem_read(dut->pc, 4);
        
        if(dut->inst == 0x00100073) dut->success_flag = 1;
        else dut->success_flag = 0;
      
        
        // 将所有被追踪的信号写入波形中
        m_trace->dump(sim_time);
        // 增加时间
        sim_time++;    
        
    }

    m_trace->close();
    delete dut;
    exit(EXIT_SUCCESS);
}