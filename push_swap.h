/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zayaz <zayaz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 12:47:35 by zayaz             #+#    #+#             */
/*   Updated: 2024/07/12 13:40:55 by zayaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/ft_printf.h"
# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

void	argv_split(char **argv, t_list **stack_a, int argc);
int		argv_digit_check(char *argv);
void	sa(t_list **swap_a);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a);
void	rra(t_list **stack_a);
int		error_message(void);
void	repeat_check(t_list **stack_a);
void	empty_check(char *argv);
int		sorted_check(t_list **stack_a, int check_num);
void	flag(t_list **stack);
void	sort_stack(t_list **stack_a, t_list **stack_b);
void	push_three_sort(t_list **stack_a, t_list **stack_b, int max_flag);
void	sort_four_stack(t_list **stack_a, t_list **stack_b, int min_flag,
			int max_flag);
void	push_four_sort(t_list **stack_a, t_list **stack_b);
void	sort_five_stack(t_list **stack_a, t_list **stack_b, int min_flag);
void	radix_sort(t_list **stack_a, t_list **stack_b);
#endif