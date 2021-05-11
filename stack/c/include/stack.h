//
// stack.h
// Created by David Dominguez
// 2020-05-11

#ifndef _STACK_H
#define _STACK_H

struct stack {
	int		size;
	int            *item;
	int		index;
};

void		init_stack(int *sz_stack, int *sz_idx, int n);
int            *array_alloc(int n);

void		push      (struct stack *pl_stack, int x);
//add to the beginning of the stack
void		pop       (struct stack *pl_stack);
//remove to the stack
void		clean     (int *array);
void		print_elements(struct stack *pl_stack);


#endif
