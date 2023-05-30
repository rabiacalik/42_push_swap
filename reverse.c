#include "push_swap.h"

int reverse_rotate(t_list **stack) //??
{
    t_list *tmp;
    t_list *end;

    if (ft_lstsize(*stack) < 2)
        return (-1);
    
    tmp = *stack;
    end = ft_lstlast(tmp); // elemanı listenin en sonuna ekler

    while (tmp)
    {
        if (tmp->next->next == NULL)
        {
            tmp->next = NULL;
            break;
        }
        tmp = tmp->next;
    }
    end->next = *stack;
    *stack = end;
    return (0);
}

int rra(t_list **stack_a)
{
    if (reverse_rotate(stack_a) == -1)
        return (-1);
    
    ft_putndl_fd("rrb", 1);
    return (0);
}

int rrb(t_list **stack_b)
{
    if (reverse_rotate(stack_b) == -1)
        return (-1);
    
    ft_putndl_fd("rrb", 1);
    return (0);
}

int rrr(t_list **stack_a, t_list **stack_b)
{
    if ((ft_lstsize(*stack_a) < 2) || (ft_lstsize(*stack_b) < 2))
        return (-1);
    
    reverse_rotate(stack_a);
    reverse_rotate(stack_b);

    ft_putndl_fd("rrr", 1);
    return (0);
}