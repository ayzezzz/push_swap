/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zayaz <zayaz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 20:32:27 by zayaz             #+#    #+#             */
/*   Updated: 2024/05/21 13:49:11 by zayaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "stdio.h"

void print_list(t_list **stack_a)
{
	t_list *current;

	current = *stack_a;
	while (current != NULL)
	{
		ft_printf("%d\n", current->content);
		current = current->next;
	}
}

int main(int argc, char **argv)
{
	t_list **stack_a;
	t_list **stack_b;

	stack_a = (t_list **)malloc(sizeof(t_list *));
	stack_b = (t_list **)malloc(sizeof(t_list *));

	if (argc > 1)
	{
		argv_check(argc, argv, stack_a);
		flag(stack_a);
		sort_stack(stack_a, stack_b);
	}

	else
		return (0);
	return (0);
}

//  argümanlar sıralı mı check sorted
//  aynı argümandan  başka var mı check repeat
//  boş mu
//  numerik dışında bir şey var mı check all num
//  + - durumlarını kontrol et

// sırala
// indexle
// aksiyonları yaz
// ≤ 5 ise sort_small_stack()
// sort_big_stack()
