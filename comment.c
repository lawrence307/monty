#include "monty.h"

/**
* comment_is - checks if the token starts with "#"
* Return: 0 or 1
*/
int comment_is(void)
{
	if (
		arguments->tokens &&
		arguments->tokens[0] &&
		arguments->tokens[0][0] == '#'
	)
		return (1);

	return (0);
}
