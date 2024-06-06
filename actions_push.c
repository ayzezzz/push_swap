#include "push_swap.h"

void push(t_list **stack_1, t_list **stack_2)
{
    t_list *temp;

    if (*stack_1 == NULL)
        exit(1);
    temp = *stack_1;
    *stack_1 = (*stack_1)->next;
    ft_lstadd_front(stack_2, temp);
}

void pa(t_list **stack_a, t_list **stack_b)
{
    push(stack_b, stack_a);
    ft_printf("pa\n");
}

void pb(t_list **stack_a, t_list **stack_b)
{
    push(stack_a, stack_b);
    ft_printf("pb\n");
}
