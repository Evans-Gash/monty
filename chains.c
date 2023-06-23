#include "monty.h"

/**
 * subtract_elements - Subtracts the top element from the second element.
 * @head: Pointer to the head of the stack
 * @counter: Line number
 * Return: No return value
*/
void subtract_elements(stack_t **head, unsigned int counter)
{
stack_t *current;
int difference, nodes;

current = *head;
for (nodes = 0; current != NULL; nodes++)
current = current->next;
if (nodes < 2)
{
fprintf(stderr, "L%d: Can't subtract, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
current = *head;
difference = current->next->n - current->n;
current->next->n = difference;
*head = current->next;
free(current);
}
