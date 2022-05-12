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
    int i;

    ft_parsing_args(ac, av, &stacks);
    ft_push_swap(&stacks, ac);

    i = stacks.stack_a.top;

    while(i >= 0)
    {
        printf("%d\n", stacks.stack_a.arr[i]);
        i--;
    }
    printf("top indice: %d\n", stacks.stack_a.top);
    return(0);
}
