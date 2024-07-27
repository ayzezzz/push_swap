/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zayaz <zayaz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:48:46 by zayaz             #+#    #+#             */
/*   Updated: 2024/07/12 12:32:30 by zayaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	num_limit(long num, char *temp)
{
	char	*str;

	str = ft_itoa(num);
	if (ft_strncmp(temp, str, ft_strlen(temp)) != 0)
		error_message();
}

static void	multiple_argv_split(t_list **stack_a, char **argv, int i)
{
	int		j;
	long	num;
	char	**temp;
	t_list	*new_node;

	temp = ft_split(argv[i], 32);
	j = 0;
	while (temp[j])
	{
		num = ft_atoi(temp[j]);
		num_limit(num, temp[j]);
		free(temp[j]);
		new_node = ft_lstnew(num, -1);
		ft_lstadd_back(stack_a, new_node);
		j++;
	}
	free(temp);
}

static void	single_argv_split(t_list **stack_a, char **argv, int i)
{
	long	num;
	t_list	*new_node;

	num = ft_atoi(argv[i]);
	num_limit(num, argv[i]);
	new_node = ft_lstnew(num, -1);
	ft_lstadd_back(stack_a, new_node);
}

void	argv_split(char **argv, t_list **stack_a, int argc)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (count_string(argv[i], 32) > 1)
			multiple_argv_split(stack_a, argv, i);
		else if (argc != 2)
			single_argv_split(stack_a, argv, i);
		else
			exit(0);
		i++;
	}
}
