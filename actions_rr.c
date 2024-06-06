#include "push_swap.h"

void reverse_rotate(t_list **stack)
{
    t_list *temp_last;
    t_list *temp_second_last;

    temp_last = ft_lstlast(*stack);
     temp_second_last = (*stack);
    while(temp_second_last->next->next != NULL)
        temp_second_last = temp_second_last->next;
    ft_lstadd_front(stack,temp_last);
    temp_second_last->next = NULL;
}

void rra(t_list **stack_a)
{
    reverse_rotate(stack_a);
    write(1,"rra\n",4);
}

void rrb(t_list **stack_b)
{
    reverse_rotate(stack_b);
    write(1,"rrb\n",4);
}
void rrr(t_list **stack_a, t_list **stack_b )
{
    reverse_rotate(stack_a);
    reverse_rotate(stack_b);
    write(1,"rrr\n",4);
}