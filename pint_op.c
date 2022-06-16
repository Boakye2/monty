#include "monty.h"

/**
 * pint - Prints the value at the top of the stack.
 * @stack: The head of the stack
 * @line_number: The line on which the error occurred
 *
 * Return: None
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
		handle_error(ERR_PINT_USG, NULL, line_number, NULL);

	printf("%d\n", (*stack)->n);
}
