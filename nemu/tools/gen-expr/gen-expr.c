/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

int i = 1;

void gen_num(){
  srand((unsigned int)time(NULL));
	int ret1 = rand() % 100; 
  buf[i] = ret1;
  i++;
}

void gen(char c){
  buf[i] = c;
  i++;
}

void gen_rand_op(){
  srand((unsigned int)time(NULL));
	int ret2 = rand() % 10; 
  switch (ret2)
  {
    case 0:
      buf[i] = '+';
      break;
    case 1:
      buf[i] = '-';
      break;
    case 2:
      buf[i] = '*';
      break;
    case 3:
      buf[i] = '/';
      break;
    case 4:
      buf[i] = '&';
      break;
    case 5:
      buf[i] = '|';
      break;
    case 6:
      buf[i] = '&';
      i++;
      buf[i] = '&';
      break;
    case 7:
      buf[i] = '|';
      i++;
      buf[i] = '|';
      break;
    case 8:
      buf[i] = '=';
      i++;
      buf[i] = '=';   
      break;
    case 9:
      buf[i] = '!';
      i++;
      buf[i] = '=';   
      break;
    default:
      break;
  }
  i++;
}

uint32_t choose(uint32_t n){
  srand((unsigned int)time(NULL));
	return rand() % n;
}

static void gen_rand_expr() {
  buf[0] = '\0';
  switch (choose(3)) {
    case 0: gen_num(); break;
    case 1: gen('('); gen_rand_expr(); gen(')'); break;
    default: gen_rand_expr(); gen_rand_op(); gen_rand_expr(); break;
  } 
}
 

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    gen_rand_expr();

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    int temp = fscanf(fp, "%d", &result);
    pclose(fp);

    printf("%u %s\n", result, buf);
    if(temp == 1) ;
  }
  return 0;
}