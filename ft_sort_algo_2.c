#include"push_swap.h"

int ft_find_largest_num(t_stacks *stacks)
{
    int i;
    int max;
    int index;

    i = 1;
    max = stacks->stack_b.arr[0];
    index = 0;
    while(i <= stacks->stack_b.top)
    {
        if (max < stacks->stack_b.arr[i])
        {
            max = stacks->stack_b.arr[i];
            index = i;
        }
        i++;
    }
    return(index);
}

static int ft_get_mid_number(t_stacks *stacks)
{
    int arr[stacks->stack_a.top];
    int mid_val;
    int i;

    i = 0;
    while (i <= stacks->stack_a.top)
    {
        arr[i] = stacks->stack_a.arr[i];
        i++;
    }
    ft_sort_arr(stacks, arr);
    i = (stacks->stack_a.top + 1) / 2;
    mid_val = arr[i];
    return (mid_val);
}

void    ft_sort_a(t_stacks *stacks)
{
    int 
}

void    ft_sort_b(t_stacks *stacks)
{

}

void    ft_sort_algo(t_stacks *stacks)
{
    int mid_value;
    int top;

    mid_value = ft_get_mid_number(stacks);
    top = stacks->stack_a.top;
    while (top > 0)
    {
        if (stacks->stack_a.arr[stacks->stack_a.top] < mid_value)
            ft_push_a_or_b(stacks, "pb");
        else if (ft_under_mid_exist(stacks, mid_value) == 1)
            ft_retate_a_or_b(stacks, "ra");
        top--;
    }
    ft_sort_a(stacks);
    ft_sort_b(stacks);


}