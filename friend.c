#include "monty.h"

/**
 * f_pall - Prints all the elements of the stack.
 * @head: Pointer to the stack head
 * @counter: Line number (not used)
 *
 * Return: No return value
 */
void f_pall(stack_t **head, unsigned int counter)
{
        stack_t *g;
        (void) counter;

        g = *head;

        if (g == NULL)
                return;

        while (g)
        {
                printf("%d\n", g->n);
                g = g->next;
        }
}
