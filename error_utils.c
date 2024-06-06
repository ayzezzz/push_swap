#include "push_swap.h"

void error_message()
{
	ft_printf("Error\n");
	exit(1);
}

void empty_check(char *argv)
{
	int i;

	i = 0;

	while (argv[i] && argv[i] == 32)
		i++;
	if (argv[i] == '\0')
		error_message();
}
void argv_digit_check(char *argv)
{
	int i;

	i = 0;
	while ((argv[i]))
	{
		if (!ft_isdigit(argv[i]) && argv[i] != 32)
		{
			if (argv[i] == '+' || argv[i] == '-') // nullık durumu
			{
				if ((!ft_isdigit(argv[i + 1])))
				{
					error_message();
				}
			}
			else
				error_message();
		}
		i++;
	}
}

void repeat_check(t_list **stack_a)
{
	t_list *lst;
	t_list *check_node;
	int temp;

	lst = *stack_a;
	while (lst)
	{
		temp = lst->content;
		check_node = lst->next;

		while (check_node)
		{
			if (temp == check_node->content)
				error_message();
			check_node = check_node->next;
		}
		lst = lst->next;
	}
}

int sorted_check(t_list **stack_a, int check_num)
{
	t_list *lst;
	t_list *next_node;
	int temp;

	lst = *stack_a;
	while (lst!= NULL)
	{
		temp = lst->content;
		next_node = lst->next;
		if (temp < next_node->content && next_node->next == NULL)
		{
			if (check_num == 1)
				exit(0);
			else
				return (1);
		}
		else if (temp > next_node->content)
			return (0);
		lst = lst->next;
	}
	return (0);
}