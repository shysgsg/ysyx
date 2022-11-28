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

#include "sdb.h"

#define NR_WP 32

static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */
WP* new_wp(){
	WP *temp;
	temp = free_;
	free_ = free_->next;
	temp->next = NULL;
	if (head == NULL){
		head = temp;
	} else {
		WP* temp2;
		temp2 = head;
		while (temp2->next != NULL){
			temp2 = temp2->next;
		}
		temp2->next = temp;
	}
	return temp;
}

void free_wp(WP *wp){
	if (wp == NULL){
		assert(0);
	}
	if (wp == head){
		head = head->next;
	} else {
		WP* temp = head;
		while (temp != NULL && temp->next != wp){
			temp = temp->next;
		}
		temp->next = temp->next->next;
	}
	wp->next =free_;
	free_ = wp;
	wp->result = 0;
	wp->expr[0] = '\0';
}

bool checkWP(){
	bool check = false;
	bool *success = false;
	WP *temp = head;
	int expr_temp;
	while(temp != NULL){
		expr_temp = expr(temp->expr, success);
		if (expr_temp != temp->result){
			check = true;
			// printf ("Hint watchpoint %d at address 0x%08x\n", temp->NO, cpu.eip);
			temp = temp->next;
			continue;
		}
		printf ("Watchpoint %d: %s\n",temp->NO,temp->expr);
		printf ("Old value = %ld\n",temp->result);
		printf ("New value = %d\n",expr_temp);
		temp->result = expr_temp;
		temp = temp->next;
	}
	return check;
}

void printf_wp(){
	WP *temp = head;
	if (temp == NULL){
		printf("No watchpoints\n");
	}
	while (temp != NULL){
		printf("Watch point %d: %s\n", temp->NO, temp->expr);
		temp = temp->next;
	}
}

WP* delete_wp(int p, bool *key){
	WP *temp = head;
	while (temp != NULL && temp->NO != p){
		temp = temp->next;
	}
	if (temp == NULL){
		*key = false;
	}
	return temp;
}