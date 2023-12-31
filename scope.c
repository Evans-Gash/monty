#include "monty.h"

/**
 * pop_top_element - Removes the top element from the stack.
 * @head: Pointer to the head of the stack
 * @counter: Line number
 * Return: No return value
*/
void pop_top_element(stack_t **head, unsigned int counter)
{
stack_t *temp;

if (*head == NULL)
{
fprintf(stderr, "L%d: Can't pop an empty stack\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
temp = *head;
*head = temp->next;
free(temp);
}
