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

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, 
  NUM = 1,
	RESGISTER = 2,
	HEX = 3,
	EQ = 4,
	NOTEQ = 5,
	OR = 6,
	AND = 7,
	POINT, NEG

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"\\-", '-'},         // minus
  {"\\*", '*'},         // multiply
  {"\\/", '/'},         // divide
  {"\\(", '('},         // Opening parenthesis
  {"\\)", ')'},         // Closing parenthesis
  
  {"\\|\\|", OR},       // or
	{"&&", AND},          // and
	{"!", '!'},           // not
  {"==", EQ},						// equal
	{"!=", NOTEQ},        // not

  {"[0-9]+", NUM},            // number
  {"\\$[a-z]+", RESGISTER},   // register
	{"0[xX][0-9a-fA-F]+", HEX}, // hex
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        int j;
				for (j = 0; j < 32; j++) { //清空
					tokens[nr_token].str[j] = '\0';
				}
				
				switch(rules[i].token_type) {
					case 256:
						break;
					case 1:
						tokens[nr_token].type = 1;
						strncpy(tokens[nr_token].str, &e[position - substr_len], substr_len);
						nr_token++;
						break;
					case 2:
						tokens[nr_token].type = 2;
						strncpy(tokens[nr_token].str, &e[position - substr_len], substr_len);
						nr_token++;
						break;
					case 3:
						tokens[nr_token].type = 3;
						strncpy(tokens[nr_token].str, &e[position - substr_len], substr_len);
						nr_token++;
						break;
					case 4:
						tokens[nr_token].type = 4;
						strcpy(tokens[nr_token].str, "==");
						nr_token++;
						break;
					case 5:
						tokens[nr_token].type = 5;
						strcpy(tokens[nr_token].str, "!=");
						nr_token++;
						break;
					case 6:
						tokens[nr_token].type = 6;
						strcpy(tokens[nr_token].str, "||");
						nr_token++;
						break;
					case 7:
						tokens[nr_token].type = 7;
						strcpy(tokens[nr_token].str, "&&");
						nr_token++;
						break;
					case '+':
						tokens[nr_token].type = '+';
						nr_token++;
						break;
					case '-':
						tokens[nr_token].type = '-';
						nr_token++;
						break;
					case '*':
						tokens[nr_token].type = '*';
						nr_token++;
						break;
					case '/':
						tokens[nr_token].type = '/';
						nr_token++;
						break;
					case '!':
						tokens[nr_token].type = '!';
						nr_token++;
						break;
					case '(':
						tokens[nr_token].type = '(';
						nr_token++;
						break;
					case ')':
						tokens[nr_token].type = ')';
						nr_token++;
						break;
					default: 
						assert(0);
				}

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}


bool check_parentheses(int p, int q){
	int a;
	int j = 0, k = 0;
	if (tokens[p].type == '(' || tokens[q].type == ')'){
		for (a = p; a <= q; a++){
			if (tokens[a].type == '('){
				j++;
			}
			if (tokens[a].type == ')'){
				k++;
			}
			if (a != q && j == k){
				return false;
			}
		}
		if (j == k){
				return true;
			} else {
				return false;
			}
	}
	return false;
}

int dominant_operator(int p, int q){
	int step = 0;
	int i;
	int op = -1;
	int pri = 0;
    
	for (i = p; i <= q; i++){
		if (tokens[i].type == '('){
			step++;
		}
		if (tokens[i].type == ')'){
			step--;
		}
	
		if (step == 0) {
      if (tokens[i].type == '+' || tokens[i].type == '-'){
        if (pri < 48){
          op = i;
          pri = 48;
        }
      } 
      else if (tokens[i].type == '*' || tokens[i].type == '/'){
        if (pri < 46){
          op = i;
          pri = 46;
        }
      }
      else if (step < 0){
        return -2;
      }
	  }
	}
	return op;
}

word_t eval(int p, int q) {
	word_t result = 0;
	int op;
	int val1, val2;

  if (p > q) {
    /* Bad expression */
    printf("Bad expression!\n");
    assert(0);
  }
  else if (p == q) {
    /* Single token.
    * For now this token should be a number.
    * Return the value of the number.
    */
    // printf("Single token.\n");
    if (tokens[p].type == NUM){
      sscanf(tokens[p].str, "%ld", &result);
      return result;
    }
    // else if (tokens[p].type == HEX){
		// 	int i = 2;
		// 	while(tokens[p].str[i] != 0){
		// 		result *= 16;
		// 		result += tokens[p].str[i] < 58 ? tokens[p].str[i] - '0' : tokens[p].str[i] - 'a' + 10;
		// 		i++;
		//   }
		// } 
    else {
      assert(0);
    }
  }
  else if (check_parentheses(p, q) == true) {
    /* The expression is surrounded by a matched pair of parentheses.
    * If that is the case, just throw away the parentheses.
    */
    return eval(p + 1, q - 1);
  }
  else {
    /* We should do more things here. */
    op = dominant_operator(p, q);
	 	if (op == -2){
			assert(0);
		} 
    else if (op == -1)
    {
      if (tokens[p].type == NEG){
        sscanf(tokens[q].str, "%ld", &result);
        return -result;
      }
    }
    else if (tokens[p].type == '!'){
				sscanf(tokens[q].str, "%ld", &result);
				return !result;
    }
  }

  val1 = eval(p, op - 1);
  val2 = eval(op + 1, q);

  switch (tokens[op].type){
    case '+' : return val1 + val2;	
    case '-' : return val1 - val2;
    case '*' : return val1 * val2;
    case '/' : return val1 / val2;
    case OR : return val1 || val2;
    case AND : return val1 && val2;
    case EQ : 
      if (val1 == val2)
        return 1;
      else 
        return 0;
    case NOTEQ :
      if (val1 != val2)
        return 1;
      else 
        return 0;
    default : assert(0);
  }
	
  return 0;
}

word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  // TODO();
  // printf("hello\n");
  // printf("%d\n", nr_token);
  int i;
	for (i = 0; i < nr_token; i++){
		if (tokens[i].type == '*' && (i == 0 || (tokens[i - 1].type != NUM && tokens[i - 1].type != HEX && tokens[i - 1].type != ')'))){
			tokens[i].type = POINT;
		}
		if (tokens[i].type == '-' && (i == 0 || (tokens[i - 1].type != NUM && tokens[i - 1].type != HEX && tokens[i - 1].type != ')'))){
			tokens[i].type = NEG;
		}
	}
  int result = eval(0, nr_token-1);
  printf("%d\n", result);
  return 0;
}

