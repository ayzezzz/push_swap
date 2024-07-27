/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions_rr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zayaz <zayaz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:48:57 by zayaz             #+#    #+#             */
/*   Updated: 2024/07/03 12:48:59 by zayaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_list **stack)
{
	t_list	*temp_last;
	t_list	*temp_second_last;

	temp_last = ft_lstlast(*stack);
	temp_second_last = (*stack);
	while (temp_second_last->next->next != NULL)
		temp_second_last = temp_second_last->next;
	ft_lstadd_front(stack, temp_last);
	temp_second_last->next = NULL;
}

void	rra(t_list **stack_a)
{
	reverse_rotate(stack_a);
	write(1, "rra\n", 4);
}
