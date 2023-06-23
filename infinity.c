#include "monty.h"

/**
 * f_pstr - prints the string starting at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @counter: line_number
 * Return: void
 */
void f_pstr(stack_t **head, unsigned int counter)
{
        stack_t *gash;
        (void) counter;

        gash = *head;
        while (gash)
        {
                if (gash->n > 127 || gash->n <= 0)
                {
                        break;
                }
                putchar(gash->n);
                gash = gash->next;
        }
        putchar('\n');
}
