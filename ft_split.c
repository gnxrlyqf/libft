/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchetoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:20:23 by mchetoui          #+#    #+#             */
/*   Updated: 2024/11/01 19:58:43 by mchetoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

int	count_words(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

char *ft_strndup(char *str, int start, char c)
{
	int i;
	int size;
	char *new;

	size = 0;
	i = start;
	while (str[i] && str[i++] != c)
		size++;
	new = malloc(size + 1);
	i = start;
	ft_memset(new, 'o', size);
	new[size] = 0;
	while (*new)
		*(new++) = str[i++];
	return (new - size);
}

char	**ft_split(char const *str, char c)
{
	int		i;
	int		j;
	int		size;
	char	**arr;

	size = count_words(str, c);
	arr = malloc((size + 1) * sizeof(char *));
	i = 0;
	j = 0;
	while (str[i] && j < size)
	{
		if (str[i] != c)
		{
			arr[j++] = ft_strndup((char *)str, i, c);
			while (str[i] && str[i] != c)
				i++;
		}
		else
			i++;
	}
	arr[j] = NULL;
	return (arr);
}
