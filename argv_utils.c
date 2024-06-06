#include "push_swap.h"

void multiple_argv_split(t_list **stack_a, char **argv, int i)
{
    char **temp;
    int j;
    int num;
    t_list *new_node;

    num = 0;
    temp = ft_split(argv[i], 32);
    j = 0;
    while (temp[j])
    {
        num = ft_atoi(temp[j]);
        free(temp[j]);
        new_node = ft_lstnew(num, -1);
        ft_lstadd_back(stack_a, new_node);
        j++;
    }
    free(temp);
}

void single_argv_split(t_list **stack_a, char **argv, int i)
{
    char *temp;
    int num;
    t_list *new_node;

    num = 0;
    temp = argv[i];
    num = ft_atoi(temp);
    new_node = ft_lstnew(num, -1);
    ft_lstadd_back(stack_a, new_node);
}

void argv_split(char **argv, t_list **stack_a)
{
    int i;

    i = 1;
    while (argv[i])
    {
        if (count_string(argv[i], 32) > 1)
            multiple_argv_split(stack_a, argv, i);

        else
            single_argv_split(stack_a, argv, i);
        i++;
    }
}

void argv_check(int argc, char **argv, t_list **stack_a)
{
    int i;
    i = 1;
    if (argv[1][0] == '\0')
        exit(0);
    while (i < argc)
    {
        empty_check(argv[i]);
        argv_digit_check(argv[i]);
        i++;
    }
    argv_split(argv, stack_a);
    repeat_check(stack_a);
    sorted_check(stack_a, 1);
}