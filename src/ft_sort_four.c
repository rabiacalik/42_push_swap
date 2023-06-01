/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_four.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalik <rcalik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:05:00 by rcalik            #+#    #+#             */
/*   Updated: 2023/06/01 12:05:01 by rcalik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_sort_four(t_list **stack_a, t_list **stack_b)
{
	int	flag;

	flag = 0;
	ft_push_small_a(stack_a, stack_b, flag);
	ft_sort_three(stack_a);
	pa(stack_a, stack_b);
}
