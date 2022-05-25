#include"push_swap.h"

// int ft_find_largest_num(t_stacks *stacks)
// {
//     int i;
//     int max;
//     int index;

//     i = 1;
//     max = stacks->stack_b.arr[0];
//     index = 0;
//     while(i <= stacks->stack_b.top)
//     {
//         if (max < stacks->stack_b.arr[i])
//         {
//             max = stacks->stack_b.arr[i];
//             index = i;
//         }
//         i++;
//     }
//     return(index);
// }

// void    ft_sort_b(t_stacks *stacks)
// {

// }


// void    ft_sort_a(t_stacks *stacks)
// {
//     int 
// }

int ft_hold_first_and_second(t_stacks *stacks, int chunk_start, int chunk_end, char c)
{
    int top;
    int i;

    top = stacks->stack_a.top;
    if (c == 'F')
    {
        while (top >= stacks->stack_a.top / 2)
        {
            if (stacks->stack_a.arr[top] >= chunk_start && stacks->stack_a.arr[top] <= chunk_end)
                break;
            else
                return (0);
            top--;
        }
    }
    i = 0;
    if (c == 'S')
    {
        while (i <= stacks->stack_a.top / 2)
        {
            if (stacks->stack_a.arr[i] >= chunk_start && stacks->stack_a.arr[i] <= chunk_end)
                break;
            else
                return (0);
            i++;
        }
    }
    printf("This is for %c ====> %d\n", c, top);
    return(top);
}

void    ft_sort_algo(t_stacks *stacks)
{
    int chunk_end;
    int first;
    int second;
    int x;
    int top;

    top = stacks->stack_a.top;
    if (stacks->stack_a.top < 100)
    {
        x = 5;
        chunk_end = stacks->stack_a.top / x;
    }
    else
    {
        x = 10;
        chunk_end = stacks->stack_a.top / x;
    }
    printf("CHunk one ===> %d\n", chunk_end);
    first = ft_hold_first_and_second(stacks, (chunk_end - stacks->stack_a.top / x) , chunk_end, 'F');
    second = ft_hold_first_and_second(stacks, (chunk_end - stacks->stack_a.top / x) , chunk_end, 'S');
    printf("Top ==> %d\n", stacks->stack_a.arr[top]);
    //printf ("FIRST ===> %d\n SECOND ====> %d\n", first, second);
    // ft_sort_a(stacks);
    // ft_sort_b(stacks);


}