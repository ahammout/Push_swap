/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:11:24 by ahammout          #+#    #+#             */
/*   Updated: 2022/05/09 16:20:14 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_duplicate(t_stack *stack_a)
{
	int	i;
	int j;

	i = 0;
	while (i < stack_a->top)
	{
		j = i + 1;
		while(j <= stack_a->top)
		{
			if(stack_a->arr[i] == stack_a->arr[j])
				ft_exit_error(stack_a);
			j++;
		}
		i++;
	}
}

void	ft_check_int(char **av, t_stack *stack_a)
{
	int 	i;
	int 	j;
	long	r;

	i = 1;
	while(av[i])
	{
		r = ft_atoi(av[i]);
		if(r > 2147483647 || r < -2147483648)
			ft_exit_error(stack_a);
		j = 0;
		while(av[i][j])
		{
			if (av[i][j] == '-')
				j++;
			if (!(av[i][j] >= '0' && av[i][j] <= '9'))
				ft_exit_error(stack_a);
			j++;
		}
		i++;
	}
}

// int	*ft_fill_args(int ac, char **av)
// {
// 	int i;
// 	int j;

// 	i =
// }

void    ft_parsing_args(int ac, char **av, t_stack *stack_a)
{
    int i;
	//int **args

    i = 1;
	//args = ft_fill_args(ac, av);
	stack_a->arr = malloc((ac - 1) * sizeof(int));
	if (!stack_a->arr)
		ft_exit_error(stack_a);
    stack_a->top = -1;
    while(ac > 1)
    {
		ft_check_int(av, stack_a);
        stack_a->top++;
        stack_a->arr[stack_a->top] = ft_atoi(av[i]);
        i++;
        ac--;
    }
    if(stack_a->top == -1)
        exit(EXIT_FAILURE);
	ft_duplicate(stack_a);
}
