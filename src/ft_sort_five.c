/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalik <rcalik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:04:54 by rcalik            #+#    #+#             */
/*   Updated: 2023/06/01 12:04:55 by rcalik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_sort_five(t_list **stack_a, t_list **stack_b)
{
	t_list	*end;
	int		flag;

	end = ft_lstlast(*stack_a);
	if (end->index == 0)
	{
		rra(stack_a);
		pb(stack_a, stack_b);
	}
	else
	{
		flag = 0;
		ft_push_small_a(stack_a, stack_b, flag);
	}
	flag = 1;
	ft_push_small_a(stack_a, stack_b, flag);
	ft_sort_three(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}
