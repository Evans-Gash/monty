#include "monty.h"

/**
 * add_node - Adds a new node to the head of the stack
 * @head: Pointer to the head of the stack
 * @n: New value to be added
 * Return: void
 */
void add_node(stack_t **head, int n)
{
	stack_t *latest_node, *gash;

	gash = *head;
	latest_node = malloc(sizeof(stack_t));
	if (latest_node == NULL)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}
	if (gash != NULL)
		gash->prev = latest_node;
	latest_node->n = n;
	latest_node->next = *head;
	latest_node->prev = NULL;
	*head = latest_node;
}
