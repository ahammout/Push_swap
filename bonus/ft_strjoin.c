/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahammout <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 14:31:39 by ahammout          #+#    #+#             */
/*   Updated: 2022/05/10 14:31:42 by ahammout         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

size_t	ft_strlen_(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ds;
	unsigned char	*sr;

	ds = (unsigned char *)dst;
	sr = (unsigned char *)src;
	if (!sr && !ds)
		return (0);
	i = 0;
	while (i < n)
	{
		ds[i] = sr[i];
		i++;
	}
	return (dst);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*word;
	size_t	i;
	size_t	ls1;
	size_t	ls2;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	ls1 = ft_strlen_(s1);
	ls2 = ft_strlen_(s2);
	word = (char *) malloc(ft_strlen_(s1) + ft_strlen_(s2) + 1);
	if (word == NULL)
		return (NULL);
	ft_memcpy(word, s1, ls1);
	while (s2[i] && i < ls2)
	{
		word[ls1 + i] = s2[i];
		i++;
	}
	word[ls1 + i] = ' ';
	word[ls1 + i + 1] = '\0';
	return (word);
}
