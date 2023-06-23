#include "monty.h"

/**
 * rotate_stack - Rotates the stack to move the top element to the bottom.
 * @head: Pointer to the head of the stack
 * @counter: Line number
 * Return: No return value
*/
void rotate_stack(stack_t **head, attribute((unused)) unsigned int counter)
{
stack_t *copy;

copy = *head;
if (*head == NULL || (*head)->next == NULL)
{
return;
}
while (copy->next)
{
copy = copy->next;
}
copy->next = *head;
copy->prev->next = NULL;
copy->prev = NULL;
(*head)->prev = copy;
(*head) = copy;
}
