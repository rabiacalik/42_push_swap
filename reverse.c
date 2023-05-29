#include "push_swap.h"

int reverse_rotate(t_list **stack)
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
    
    
}