
#include "push_swap.h"

void flag(t_list **stack)
{
    int stack_size;
    t_list *temp;
    t_list *min_node;
    int min;
    int flag_num;

    stack_size = ft_lstsize(*stack);
    flag_num = 0;
    temp = (*stack);
    while (flag_num < stack_size)
    {
        min = 2147483647;
        min_node=NULL;
        temp=(*stack);
        while (temp != NULL)
        {
            if ((temp->content <= min) && (temp->flag == -1))
            {
                min = temp->content;
                min_node = temp;
            }
            temp = temp->next;
        }
        min_node->flag= flag_num;
        flag_num++;
    }
   // print_list(stack);
}