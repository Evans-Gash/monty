#include "monty.h"

/**
 * f_div - Divides the top two elements of the stack.
 * @head: Pointer to the stack head
 * @counter: Line number
 *
 * Return: No return value
 */
void f_div(stack_t **head, unsigned int counter)
{
        stack_t *gash;
        int len = 0, result;

        gash = *head;

        while (gash)
        {
                gash = gash->next;
                len++;
        }

        if (len < 2)
        {
                fprintf(stderr, "L%d: Cannot divide, stack is too short\n", counter);
                fclose(bus.file);
                free(bus.content);
                free_stack(*head);
                exit(EXIT_FAILURE);
        }

        gash = *head;

        if (gash->n == 0)
        {
                fprintf(stderr, "L%d: Division by zero\n", counter);
                fclose(bus.file);
                free(bus.content);
                free_stack(*head);
                exit(EXIT_FAILURE);
        }

        result = gash->next->n / gash->n;
        gash->next->n = result;
        *head = gash->next;
        free(gash);
}
