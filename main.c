/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:14:38 by ahammout          #+#    #+#             */
/*   Updated: 2022/05/11 13:25:37 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int main(int ac, char **av)
{
    t_stacks stacks;
    int i = 0;

    ft_parsing_args(ac, av, &stacks);
    stacks.stack_b.top = -1;
    stacks.stack_b.arr = malloc((ac - 1) * sizeof(int));
    if (!stacks.stack_b.arr)
        ft_exit_error(&stacks, 2);
    ft_push_swap(&stacks);

    while(i <= stacks.stack_a.top)
    {
        printf("%d\n",stacks.stack_a.arr[i]);
        i++;
    }
    printf("top indice: %d\n", stacks.stack_a.top);
    return(0);
}
