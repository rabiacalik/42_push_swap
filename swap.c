#include "push_swap.h"

// stakin ilk iki değerinin yerleri ve index değerlerinin yerlerii değiştirilir
int swap(t_list **stack)
{
    t_list *tmp;
    t_list *holder; //kulp
    int data;
    int i;

    if (ft_lstsize(*stack) < 2) //stack boyutu 2 den küçükse
        return (-1);
    
    tmp = *stack; //staki attık tmp ye
    
    holder = tmp->next; // holder = tmp nin sonraki degeri

    data = tmp->content; // data = tmp nin degeri

    i = tmp->index; // i = tmp nin indexi

    tmp->content = holder->content; // tmp nin şimdiki değeri = tmp nin sonraki değeri atanır

    tmp->index = holder->index; // tmp nin şimdiki index = tmp nin sonraki indexi atanır

    holder->content = data; // tmp nin sonraki indexi = tmp nin degeri

    holder->index = i; // tmp nin sonraki index = tmp nin şimdiki indexi atanır

    return (0);
}

int sa(t_list **stack_a)
{
    if(swap(stack_a) == -1)
        return (-1);
    
    ft_putendl_fd("sa", 1); //ekrana yazdir
    return (0);
}