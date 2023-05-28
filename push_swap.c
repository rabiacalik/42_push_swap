#include <push_swap.h>



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
}