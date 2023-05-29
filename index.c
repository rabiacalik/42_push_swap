#include "push_swap.h"

// stack üzerindeki tüm elemanları dolaşarak en küçük değeri bulmayı
// ve bu değeri içeren düğümün işaretçisini döndürmeyi amaçlar
static t_list *get_next_min(t_list **stack)
{
    t_list *tmp;
    t_list *min;
    int flag;

    tmp = *stack;
    flag = 0;
    min = NULL;

    if (!tmp)
        return (NULL);
    
    while (tmp)
    {
        // -1 indeks değeri, min değer atanmamış düğümleri filtrelemek ve min değeri bulmak için kullanılmaktadır
        if ((tmp->index == -1) && (!flag || tmp->content < min->content)) //??neden -1
        {
            flag = 1;
            min = tmp;
        }
        tmp = tmp->next;
    }
    return (min);
}

// bağlı listedeki düğümlere indeks değerleri atayan bir işleve sahiptir.
void index_stack(t_list **stack)
{
    t_list *tmp;
    int i;

    i = 0;
    tmp = get_next_min(stack);

    while (tmp)
    {
        tmp->index = i++;
        tmp = get_next_min(stack);
    }
}