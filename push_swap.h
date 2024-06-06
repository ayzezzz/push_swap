/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zayaz <zayaz@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 20:24:22 by zayaz             #+#    #+#             */
/*   Updated: 2024/05/21 13:50:10 by zayaz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "ft_printf/ft_printf.h"
#include "libft/libft.h"
#include <unistd.h>
#include <stdlib.h>

void argv_check(int argc, char **argv, t_list **stack_a);
void argv_split(char **argv, t_list **stack_a);
void argv_digit_check(char *argv);
void swap(t_list **stack);
void sa(t_list **swap_a);
void sb(t_list **swap_b);
void ss(t_list **swap_a, t_list **swap_b);
void push(t_list **stack_1, t_list **stack_2);
void pa(t_list **stack_a, t_list **stack_b);
void pb(t_list **stack_a, t_list **stack_b);
void rotate(t_list **stack);
void ra(t_list **stack_a);
void rb(t_list **stack_b);
void reverse_rotate(t_list **stack);
void rra(t_list **stack_a);
void rrb(t_list **stack_b);
void rrr(t_list **stack_a, t_list **stack_b);
void error_message();
void repeat_check(t_list **stack_a);
void single_argv_split(t_list **stack_a, char **argv, int i);
void multiple_argv_split(t_list **stack_a, char **argv, int i);
void print_list(t_list **stack_a);
void empty_check(char *argv);
int sorted_check(t_list **stack_a, int check_num);
void flag(t_list **stack);
void sort_stack(t_list **stack_a, t_list **stack_b);
void sort_two_stack(t_list **stack_a);
void sort_three_stack(t_list **stack_a, int max_flag);
void push_three_sort(t_list **stack_a, t_list **stack_b, int max_flag);
void sort_four_stack(t_list **stack_a, t_list **stack_b, int min_flag, int max_flag);
void sort_five_stack(t_list **stack_a, t_list **stack_b, int min_flag);
void push_four_sort(t_list **stack_a, t_list **stack_b);
void	radix_sort(t_list **stack_a, t_list **stack_b);
#endif