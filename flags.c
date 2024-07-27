/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zayaz <zayaz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:48:16 by zayaz             #+#    #+#             */
/*   Updated: 2024/07/12 13:40:38 by zayaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	flag(t_list **stack_a)
{
	t_list	*temp;
	t_list	*min_node;
	int		stack_size;
	int		min;
	int		flag_num;

	stack_size = ft_lstsize(*stack_a);
	flag_num = 0;
	while (flag_num < stack_size)
	{
		min = 2147483647;
		temp = *stack_a;
		min_node = NULL;
		while (temp != NULL)
		{
			if ((temp->content <= min) && (temp->flag == -1))
			{
				min = temp->content;
				min_node = temp;
			}
			temp = temp->next;
		}
		min_node->flag = flag_num;
		flag_num++;
	}
}
