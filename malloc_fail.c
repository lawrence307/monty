#include "monty.h"

/**
 * malloc_failed - Function that handles the error when malloc fails to allocate memory.
 */

void malloc_failed(void)
{
	dprintf(2, "Error: malloc failed\n");
	free_arguments();
	exit(EXIT_FAILURE);
}
