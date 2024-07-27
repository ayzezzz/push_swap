/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zayaz <zayaz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:47:10 by zayaz             #+#    #+#             */
/*   Updated: 2024/07/05 16:04:01 by zayaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_two_stack(t_list **stack_a)
{
	sa(stack_a);
}

static void	sort_three_stack(t_list **stack_a, int max_flag)
{
	if ((*stack_a)->flag == max_flag)
		ra(stack_a);
	else if ((*stack_a)->next->flag == max_flag)
		rra(stack_a);
	if (!sorted_check(stack_a, 0))
		sa(stack_a);
}

void	push_three_sort(t_list **stack_a, t_list **stack_b, int max_flag)
{
	pb(stack_a, stack_b);
	sort_three_stack(stack_a, max_flag);
	pa(stack_a, stack_b);
}

void	sort_stack(t_list **stack_a, t_list **stack_b)
{
	int	size;

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
}
