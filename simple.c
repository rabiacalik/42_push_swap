#include "push_swap.h"

void ft_small_sort(t_list **stack_a, t_list **stack_b)
{
    (void)stack_b;

    if (ft_lstsize(*stack_a) == 2) //liste boyutu 2 ye eşitse
    {
        if ((*stack_a)->content > (*stack_a)->next->content)
            sa(stack_a);
    }

    else if (ft_lstsize(*stack_a) == 3) // boyutu 3 e eşitse
        ft_sort_three(stack_a); 

    
}

/*
sa : swap a -İlk 2 elementi a yığınının en üstüne çıkarır. Bir veya daha az eleman
varsa hiçbir şey yapmaz.

sb : swap b -İlk 2 elementi b yığınının en üstüne çıkarır. Bir veya daha az eleman
varsa hiçbir şey yapmaz.

ss : sa ve sb aynı anda kullanılır.

pa : push a - b yığınının en üstteki ilk elemanını a yığının en üstüne yerleştirir. b
boşsa hiçbir şey yapmaz.

pb : push b -a yığınının en üstteki ilk elemanını b yığının en üstüne yerleştirir. a
boşsa hiçbir şey yapmaz.

ra : rotate a - a yığınının tüm elemanlarını 1 üste taşır. İlk eleman son eleman
haline gelir.

rb : rotate b - b yığınının tüm elemanlarını 1 üste taşır. İlk eleman son eleman
haline gelir.

rr : ra ve rb aynı anda kullanılır. 

rra : reverse rotate a - a yığınının tüm elemanlarını 1 alta taşır. Son eleman
ilk eleman haline gelir.
*/