#include "monty.h"

/**
 * rotate_stack - Rotates the stack to move the bottom element
 * @head: Pointer to the head of the stack
 * @counter: Line number
 * Return: No return value
*/
void rotate_stack(stack_t **head, attribute((unused)) unsigned int counter)
{
stack_t *tmp = *head, *aux;

if (*head == NULL || (*head)->next == NULL)
{
return;
}
aux = (*head)->next;
aux->prev = NULL;
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = *head;
(*head)->next = NULL;
(*head)->prev = tmp;
(*head) = aux;
}
