/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zayaz <zayaz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:47:43 by zayaz             #+#    #+#             */
/*   Updated: 2024/07/12 13:35:20 by zayaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	argv_check(int argc, char **argv, t_list **stack_a)
{
	int	i;

	i = 1;
	if (argv[1][0] == '\0')
		exit(0);
	while (i < argc)
	{
		empty_check(argv[i]);
		argv_digit_check(argv[i]);
		i++;
	}
	argv_split(argv, stack_a, argc);
	repeat_check(stack_a);
	sorted_check(stack_a, 1);
}

static void	free_stack(t_list **stack)
{
	t_list	*node;
	t_list	*tmp;

	node = *stack;
	while (node)
	{
		tmp = node;
		node = node->next;
		free(tmp);
	}
	free(stack);
}

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;

	stack_a = (t_list **)ft_calloc(1, sizeof(t_list *));
	stack_b = (t_list **)ft_calloc(1, sizeof(t_list *));
	if (argc > 1)
	{
		argv_check(argc, argv, stack_a);
		flag(stack_a);
		sort_stack(stack_a, stack_b);
	}
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
