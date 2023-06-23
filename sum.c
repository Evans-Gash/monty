#include "monty.h"

/**
 * f_add - sums the first 2 elements
 * @head: pointer to the stack head
 * @counter: line_number
 * Return: void
 */
void f_add(stack_t **head, unsigned int counter)
{
        stack_t *x;
        int len = 0, sum;

        x = *head;
        while (x)
        {
                x = x->next;
                len++;
        }

        if (len < 2)
        {
                fprintf(stderr, "L%d: can't add, stack too short\n", counter);
                fclose(bus.file);
                free(bus.content);
                free_stack(*head);
                exit(EXIT_FAILURE);
        }

        x = *head;
        sum = x->n + x->next->n;
        x->next->n = sum;
        *head = x->next;
        free(x);
}
