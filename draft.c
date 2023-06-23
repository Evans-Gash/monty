#include "monty.h"

/**
 * set_queue_mode - Sets the stack mode to queue (FIFO).
 * @head: Pointer to the head of the stack
 * @counter: Line number
 * Return: No return value
*/
void set_queue_mode(stack_t **head, unsigned int counter)
{
(void)head;
(void)counter;
bus.lifi = 1;
}
/**
 * add_to_queue - Adds a new node to the tail of the stack (queue mode).
 * @n: Value of the new node
 * @head: Pointer to the head of the stack
 * Return: No return value
*/
void add_to_queue(stack_t **head, int n)
{
stack_t *new_node, *aux;

aux = *head;
new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
{
printf("Error\n");
}
new_node->n = n;
new_node->next = NULL;
if (aux)
{
while (aux->next)
aux = aux->next;
}
if (!aux)
{
*head = new_node;
new_node->prev = NULL;
}
else
{
aux->next = new_node;
new_node->prev = aux;
}
}
