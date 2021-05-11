//
// stack.c
// Created by David - Dominguez
// 2020-05-11

#include <stdlib.h>
#include <stdio.h>
#include "../include/stack.h"

void 
init_stack(int *sz_stack, int *idx_stack, int n)
{
	int		i = 0;
	*sz_stack = n;
	*idx_stack = 0;
}

int            *
array_alloc(int n)
{
	int		i = 0;
	int            *array = malloc(sizeof(int) * n);

	for (i = 0; i < n; i++) {
		array[i] = 0;
	}
	return array;
}



void 
print_elements(struct stack *pl_stack)
{
	int		i = 0;

	printf("SYACK.size: %d\n", pl_stack->size);
	printf("SYACK.index: %d\n", pl_stack->index);

	for (i = 0; i < pl_stack->size; i++) {
		printf("STACK.item [%d] : %d \n", i, pl_stack->item[i]);
	}

}

void 
push(struct stack *pl_stack, int x)
{
	if (pl_stack->index <= pl_stack->size) {
		pl_stack->index++;
		pl_stack->item[pl_stack->index - 1] = x;
		printf("push (%d) \n", pl_stack->item[pl_stack->index - 1]);
	} else {
		printf("Stack is full\n");
	}
}

void 
pop(struct stack *pl_stack)
{
	if (pl_stack->index >= 0) {
		pl_stack->index--;
		pl_stack->item[pl_stack->index] = 0;

	} else {
		printf("Stack is empty\n");
	}
}

void 
clean(int *array)
{
	free(array);
	printf("deallocate memory\n");
}
