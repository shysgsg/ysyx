#include <am.h>
#include <nemu.h>

extern char _heap_start;
int main(const char *args);

// Area是一个结构体数据类型，包含一个头指针和一个尾指针
Area heap = RANGE(&_heap_start, PMEM_END);  // 结构用于指示堆区的起始和末尾
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;


// 结构用于指示堆区的起始和末尾
void putch(char ch) {
  outb(SERIAL_PORT, ch);
}


// 用于结束程序的运行
void halt(int code) {
  nemu_trap(code);

  // should not reach here
  while (1);
}


// 用于进行TRM相关的初始化工作
void _trm_init() {
  int ret = main(mainargs);
  halt(ret);
}
