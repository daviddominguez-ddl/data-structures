//
// main.c
// Created by David Dominguez
// 2020-05-11

#include <stdlib.h>
#include <stdio.h>
#include "../include/stack.h"



int 
main(int argc, char *arv[])
{

	struct stack	ds_stack;
	int		n = 0;
	scanf("%d", &n);

	init_stack(&ds_stack.size, &ds_stack.index, n);
	ds_stack.item = array_alloc(ds_stack.size);	/* get memory in the
							 * current context */

	print_elements(&ds_stack);	/* show init state of stack */

	/* push operation */

	int		k = 0;
	for (int i = 0; i < ds_stack.size; i++) {
		k = ((1 + i) / 2) * i;	/* initialize stack randomly */
		push(&ds_stack, k);
		print_elements(&ds_stack);
	}

	printf("delete\n");

	/* pop operation */

	for (int j = 0; j < 5; j++) {
		pop(&ds_stack);
		print_elements(&ds_stack);
	}


	clean(ds_stack.item);
	return 0;
}
