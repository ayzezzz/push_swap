#include "push_swap.h"

void push_four_sort(t_list **stack_a, t_list **stack_b)
{
    pb(stack_a, stack_b);
    sort_four_stack(stack_a, stack_b, 1, 4);
    pa(stack_a, stack_b);
}

void sort_five_stack(t_list **stack_a, t_list **stack_b, int min_flag)
{
    if ((*stack_a)->next->flag == min_flag)
        sa(stack_a);
    else if ((*stack_a)->next->next->flag == min_flag)
    {
        ra(stack_a);
        ra(stack_a);
    }
    else if ((*stack_a)->next->next->next->flag == min_flag)
    {
        rra(stack_a);
        rra(stack_a);
    }
    else if ((*stack_a)->next->next->next->next->flag == min_flag)
        rra(stack_a);

    push_four_sort(stack_a, stack_b);
}

void radix_sort(t_list **stack_a, t_list **stack_b)
{
    int bit;
    int size;
    int i;

    bit = 0;

    while (bit < 4)
    {
        i = 0;
        size = ft_lstsize(*stack_a);
        while (i < size)
        {
            if (((*stack_a)->flag >> bit) & 1)
                ra(stack_a);
            else
                pb(stack_a, stack_b);
            i++;
        }
        i = 0;
        size = ft_lstsize(*stack_b);
        while (i < size)
        {
            if (((*stack_b)->flag >> bit) & 1)
                pa(stack_a, stack_b);
            else if (size > 1 && bit != 3)
                ra(stack_b);
            else if (bit == 3)
                pa(stack_a, stack_b);

            i++;
        }
        bit++;
    }
}
