/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcalik <rcalik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:05:05 by rcalik            #+#    #+#             */
/*   Updated: 2023/06/01 12:05:06 by rcalik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_other_three(t_list **stack_a, int *nums)
{
	if (nums[0] > nums[1] && nums[1] > nums[2])
	{
		ra(stack_a);
		sa(stack_a);
	}
	else if (nums[0] < nums[1] && nums[1] > nums[2]
		&& nums[0] < nums[2])
	{
		sa(stack_a);
		ra(stack_a);
	}
}

void	ft_sort_three(t_list **stack_a)
{
	t_list	*head;
	int		nums[3];
	int		i;

	i = 0;
	head = *stack_a;
	while (head != 0)
	{
		nums[i] = head->content;
		head = head->next;
		i++;
	}
	if (nums[0] > nums[1] && nums[1] < nums[2] && nums[0] < nums[2])
		sa(stack_a);
	else if (nums[0] < nums[1] && nums[1] > nums[2] && nums[0] > nums[2])
		rra(stack_a);
	else if (nums[0] > nums[1] && nums[1] < nums[2] && nums[0] > nums[2])
		ra(stack_a);
	else
		ft_other_three(stack_a, nums);
}
