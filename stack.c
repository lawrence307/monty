#include "monty.h"

/**
 * stack - the opcode that sets the format of the data to a stack (LIFO)
 * @stack: Pointer to the stack.
 * @line_number: Where the stack function is called.
 */

void stack(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
	arguments->stack = 1;
}
