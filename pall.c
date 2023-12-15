#include "monty.h"

/**
 * pall - opcode that prints all the elements in the stack, starting from top of the stack.
 * @stack: Pointer to the stack.
 * @line_number: Where the pall function is called.
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (arguments->head == NULL)
		return;

	(void) line_number;
	(void) stack;

	tmp = arguments->head;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
