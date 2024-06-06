
#include "push_swap.h"

void swap(t_list **stack)
{
    t_list *first_temp;
    t_list *second_temp;

    if(ft_lstsize(*stack) < 2)
        return;
    first_temp = (*stack);
    second_temp = (*stack)->next;
    first_temp->next = second_temp->next;
    second_temp->next= first_temp;
    (*stack) = second_temp;
}

void sa(t_list **swap_a)
{
    swap(swap_a);
    ft_printf("sa\n");
}

void sb(t_list **swap_b)
{
    swap(swap_b);
    ft_printf("sb\n");
}

void ss(t_list **swap_a, t_list **swap_b )
{
    swap(swap_a);
    swap(swap_b);
    ft_printf("ss\n");
}