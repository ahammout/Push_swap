#include"push_swap.h"

void    ft_shift_up(t_stack *stack, int top, int top_element)
{
    while (top >= 0)
    {
        if (top == 0)
        {
            stack->arr[top] = top_element;
            break;
        }
        stack->arr[top] = stack->arr[top - 1];
        top--;
    }
}

void    ft_retate_a_or_b(t_stacks *stacks, char *action)
{
    int top_a;
    int top_b;

    top_a = stacks->stack_a.arr[stacks->stack_a.top];
    top_b = stacks->stack_b.arr[stacks->stack_b.top];
    if (ft_strcmp(action, "ra") == 0)
    {
        ft_shift_up(&stacks->stack_a, stacks->stack_a.top, top_a);
        write(1, "ra\n", 3);
    }
    if (ft_strcmp(action, "rb") == 0)
    {
        ft_shift_up(&stacks->stack_b, stacks->stack_b.top, top_b);
        write(1, "rb\n", 3);
    }
    if (ft_strcmp(action, "rr") == 0)
    {
        ft_shift_up(&stacks->stack_a, stacks->stack_a.top, top_a);
        ft_shift_up(&stacks->stack_b, stacks->stack_b.top, top_b);
        write(1, "rr\n", 3);
    }
}