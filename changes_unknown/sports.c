#include "monty.h"

/**
 * print_top_element - Prints the top element of the stack.
 * @head: Pointer to the head of the stack
 * @counter: Line number
 * Return: No return value
*/
void print_top_element(stack_t **head, unsigned int counter)
{
if (*head == NULL)
{
fprintf(stderr, "L%u: Can't pint, stack empty\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
printf("%d\n", (*head)->n);
}
