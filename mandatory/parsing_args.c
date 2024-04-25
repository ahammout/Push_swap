/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <ahammout@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:11:24 by ahammout          #+#    #+#             */
/*   Updated: 2022/06/16 20:48:21 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	duplicate(t_stacks *stacks)
{
	int	i;
	int	j;

	i = 0;
	while (i < stacks->stack_a.top)
	{
		j = i + 1;
		while (j <= stacks->stack_a.top)
		{
			if (stacks->stack_a.arr[i] == stacks->stack_a.arr[j])
				exit_error(stacks, 1);
			j++;
		}
		i++;
	}
}

void	to_int(char **args, t_stacks *stacks)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (args[size])
		size++;
	stacks->stack_a.arr = malloc((size) * sizeof(int));
	if (!stacks->stack_a.arr)
		exit_error(stacks, 1);
	size--;
	stacks->stack_a.top = size;
	while (size >= 0)
	{
		stacks->stack_a.arr[i] = ft_atoi(args[size]);
		i++;
		size--;
	}
	if (stacks->stack_a.top == -1)
		exit (EXIT_FAILURE);
}

void	check_args(char **args)
{
	int		i;
	int		j;
	long	r;

	i = 0;
	while (args[i])
	{
		j = 0;
		if (args[i][j] == '-' || args[i][j] == '+')
			j++;
		while (args[i][j])
		{
			if (!(args[i][j] >= '0' && args[i][j] <= '9'))
				exit_error(NULL, 0);
			j++;
		}
		r = ft_atoi(args[i]);
		if (r > 2147483647 || r < -2147483648)
			exit_error(NULL, 0);
		i++;
	}
}

void	int_check(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			j++;
		i++;
	}
	if (j == 0)
	{
		exit_error(NULL, 0);
		free(str);
	}
}

char	**fill_args(int ac, char **av)
{
	char	*str;
	char	**args;
	int		i;

	i = 1;
	str = (char *)malloc(sizeof(char));
	if (!str)
		return (NULL);
	while (i < ac)
	{
		str = ft_strjoin(str, av[i]);
		i++;
	}
	args = (char **)malloc(sizeof(char *) * i);
	args = ft_split(str, ' ');
	free (str);
	return (args);
}

void	parsing_args(int ac, char **av, t_stacks *stacks)
{
	char	**args;

	stacks->stack_a.top = -1;
	args = fill_args(ac, av);
	check_args(args);
	to_int(args, stacks);
	free(args);
	duplicate(stacks);
	stacks->stack_b.arr = malloc ((stacks->stack_a.top) * sizeof(int));
	if (!stacks->stack_b.arr)
		exit_error(stacks, 2);
	stacks->stack_b.top = -1;
}
