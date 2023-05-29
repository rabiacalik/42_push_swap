#include <push_swap.h>

static void init(t_list **stack, int argc, char **argv)
{
    t_list *newList;
    char **table;
    int i;

    i = 0;
    if (argc == 2)
        table = ft_split(argv[1], ' ');

    else
    {
        i = 1;
        table = argv;
    }

    while (table[i])
    {
        newList = ft_lstnew(ft_atoi(table[i])); // yeni liste olusturuldu
        ft_lstadd_back(stack, newList);
        i++;
    }
    index_stack(stack);
    
    if (argc == 2)
        ft_free_str(table);
}

// bağlı listenin sıralı olup olmadığını belirlemek için kullanılır
int is_sorted(t_list **stack)
{
    t_list *tmp;

    tmp = *stack;

    while (tmp && tmp->next)
    {
        if (tmp->content > tmp->next->content)
            return (0);
        tmp = tmp->next;
    }
    return (1);
}

static void sort(t_list **stack_a, t_list **stack_b)
{
    if (ft_lstsize(*stack_a) <= 5) //listenin boyutu 5 den küçükse
    {
        ft_small_sort(stack_a, stack_b);
    }
}

int main(int argc, char **argv)
{
    t_list **stack_a;
    t_list **stack_b;

    if (argc == 2)
        return (-1);
    
    check_args(argc, argv);

    stack_a = (t_list **)malloc(sizeof(t_list));
    stack_b = (t_list **)malloc(sizeof(t_list));

    *stack_a = NULL;
    *stack_b = NULL;

    init(stack_a, argc, argv);

    if (is_sorted(stack_a))
    {
        free_stack(stack_a);
        free_stack(stack_b);
        return (0);
    }
    sort(stack_a, stack_b);
}