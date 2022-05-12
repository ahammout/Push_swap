/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 12:13:00 by ahammout          #+#    #+#             */
/*   Updated: 2022/05/09 15:56:20 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void    ft_exit_error( t_stacks *stacks, int num)
{
	if(num == 1)
	{
		free(stacks->stack_a.arr);
    	write(2, "Error\n", 6);
		printf("stack_a free");
    	exit(EXIT_FAILURE);
	}
	if (num == 2)
	{
		free(stacks->stack_a.arr);
		free(stacks->stack_b.arr);
		write(2, "Error\n", 6);
		printf("stack_b & stack_a free");
		exit(EXIT_FAILURE);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1 ++;
		s2 ++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 - *s2);
}

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (str[i] != (unsigned char)c)
	{
		if (str[i] == '\0')
			return (0);
		i++;
	}
	return ((char *) str + i);
}

long	ft_atoi(char *str)
{
	int		sign;
	long	num;

	sign = 1;
	num = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str ++;
	if (*str == '-')
		sign *= -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		num = (num * 10) + (*str - '0');
		str++;
	}
	return (num * sign);
}
