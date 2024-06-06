#include "push_swap.h"

void sort_two_stack(t_list **stack_a)
{
    sa(stack_a);
}

void sort_three_stack(t_list **stack_a, int max_flag)
{
    if ((*stack_a)->flag == max_flag)
        ra(stack_a);
    else if ((*stack_a)->next->flag == max_flag)
        rra(stack_a);
    if (!sorted_check(stack_a, 0))
        sa(stack_a);
}

void push_three_sort(t_list **stack_a, t_list **stack_b, int max_flag)
{
    pb(stack_a, stack_b);
    sort_three_stack(stack_a, max_flag);
    pa(stack_a, stack_b);
}

void sort_four_stack(t_list **stack_a, t_list **stack_b, int min_flag, int max_flag)
{
    if ((*stack_a)->next->flag == min_flag)
        sa(stack_a);
    else if ((*stack_a)->next->next->flag == min_flag)
    {
        rra(stack_a);
        rra(stack_a);
    }
    else if ((*stack_a)->next->next->next->flag == min_flag)
        rra(stack_a);
    push_three_sort(stack_a, stack_b, max_flag);
}

void sort_stack(t_list **stack_a, t_list **stack_b)
{
    int size;

    size = ft_lstsize(*stack_a);
    if (size == 2)
        sort_two_stack(stack_a);
    else if (size == 3)
        sort_three_stack(stack_a, 2);
    else if (size == 4)
        sort_four_stack(stack_a, stack_b, 0, 3);
    else if (size == 5)
        sort_five_stack(stack_a, stack_b, 0);
    else
        radix_sort(stack_a, stack_b);
    print_list(stack_a);
}


// void radix_sort(t_list **stack_a, t_list **stack_b)
// {
//     int bit;
//     int i;
//     int size;

//     bit = 0;

//     while (bit < 4)
//     {
//         i = 0;
//         size = ft_lstsize(*stack_a);
//         while (i < size)
//         {
//             if (((*stack_a)->flag >> bit) & 1)
//                 ra(stack_a);
//             else
//                 pb(stack_a, stack_b);
            
//             i++;
//         }

//         i = 0;
//         size = ft_lstsize(*stack_b);
//         while (i < size)
//         {
//             if (((*stack_b)->flag >> bit) & 1)
//                 pa(stack_a, stack_b);
//             else if (size > 1 && bit != 3)
//                 ra(stack_b);
//             else if (bit == 3)
//                 pa(stack_a, stack_b);
            
//             i++;
//         }

//         bit++;
//     }
// }
