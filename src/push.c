/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalik <rcalik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:06:08 by rcalik            #+#    #+#             */
/*   Updated: 2023/06/01 12:06:09 by rcalik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	push(t_list **dest, t_list **source)
{
	t_list	*tmp;
	t_list	*tmp_dest;
	t_list	*tmp_source;

	if (ft_lstsize(*source) == 0)
		return (-1);
	tmp_dest = *dest;
	tmp_source = *source;
	tmp = tmp_source;
	tmp_source = tmp_source->next;
	*source = tmp_source;
	if (!tmp_dest)
	{
		tmp_dest = tmp;
		tmp_dest->next = NULL;
		*dest = tmp_dest;
	}
	else
	{
		tmp->next = tmp_dest;
		*dest = tmp;
	}
	return (0);
}

int	pa(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_a, stack_b) == -1)
		return (-1);
	ft_putendl_fd("pa", 1);
	return (0);
}

int	pb(t_list **stack_a, t_list **stack_b)
{
	if (push(stack_b, stack_a) == -1)
		return (-1);
	ft_putendl_fd("pb", 1);
	return (0);
}
