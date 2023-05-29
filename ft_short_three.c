#include "push_swap.h"

void ft_sort_three(t_list **stack_a)
{
    t_list *head;
    int nums[3];
    int i;

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
}