#include "push_swap.h"

void rotate(t_list **stack)
{
    t_list *temp;
    t_list *temp_first;

    temp_first= *stack; //ilk elemanı son eleman yaptım
    *stack = (*stack) -> next; // listenin başını 2. elemana kaydırdım
    temp = ft_lstlast(*stack); //son elemanı bull
    temp->next = temp_first;
    temp_first -> next = NULL; 
}

void ra(t_list **stack_a)
{
   rotate(stack_a);
    write(1,"ra\n",3);
}

void rb(t_list **stack_b)
{
   rotate(stack_b);
    write(1,"rb\n",3);
}
void rr(t_list **stack_a, t_list **stack_b)
{
    rotate(stack_a);
    rotate(stack_b);
    write(1,"rr\n",3);
}