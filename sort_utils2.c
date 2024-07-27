/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zayaz <zayaz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:47:03 by zayaz             #+#    #+#             */
/*   Updated: 2024/07/03 12:47:05 by zayaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_four_sort(t_list **stack_a, t_list **stack_b)
{
	pb(stack_a, stack_b);
	sort_four_stack(stack_a, stack_b, 1, 4);
	pa(stack_a, stack_b);
}

void	sort_four_stack(t_list **stack_a, t_list **stack_b, int min_flag,
		int max_flag)
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

void	sort_five_stack(t_list **stack_a, t_list **stack_b, int min_flag)
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
