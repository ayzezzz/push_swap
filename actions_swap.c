/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zayaz <zayaz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:48:51 by zayaz             #+#    #+#             */
/*   Updated: 2024/07/03 12:48:53 by zayaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_list **stack)
{
	t_list	*first_temp;
	t_list	*second_temp;

	if (ft_lstsize(*stack) < 2)
		return ;
	first_temp = (*stack);
	second_temp = (*stack)->next;
	first_temp->next = second_temp->next;
	second_temp->next = first_temp;
	(*stack) = second_temp;
}

void	sa(t_list **swap_a)
{
	swap(swap_a);
	ft_printf("sa\n");
}
