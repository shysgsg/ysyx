  #include "Vour.h"
  #include "verilated.h"
  #include <stdio.h>
  #include <stdlib.h>
  #include <assert.h>
  
  int main(int argc, char** argv, char** env) {
      VerilatedContext* contextp = new VerilatedContext;
      contextp->commandArgs(argc, argv);
      Vour* top = new Vour{contextp};
      int count = 0;
      while (count < 10)
      {
        int a = rand() & 1;
        int b = rand() & 1;
        top->a = a;
        top->b = b;
        top->eval();
        printf("a = %d, b = %d, f = %d\n", a, b, top->f);
        assert(top->f == (a ^ b));
        count ++;
      }
      delete top;
      delete contextp;
      return 0;
  }



