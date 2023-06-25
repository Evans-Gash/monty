#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/* Function prototypes */
void f_pchar(stack_t **head, unsigned int counter);
void subtract_elements(stack_t **head, unsigned int counter);
void set_queue_mode(stack_t **head, unsigned int counter);
void add_to_queue(stack_t **head, int n);
void multiply_top_elements(stack_t **head, unsigned int counter);
void rotate_stack_to_bottom(stack_t **head, unsigned int counter);
void f_pall(stack_t **head, unsigned int counter);
void f_mod(stack_t **head, unsigned int counter);
void f_pstr(stack_t **head, unsigned int counter);
void f_div(stack_t **head, unsigned int counter);

#endif /* MONTY_H */
