/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchetoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 00:09:36 by mchetoui          #+#    #+#             */
/*   Updated: 2024/11/01 17:08:58 by mchetoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int check(char c, char const *set)
{
	while (*set)
	{
		if (*(set++) == c)
			return (1);
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *new;
	char *str;
	int len;
	int i;

	if (!set || !*set || !s1 || !*s1)
		return ((char *)s1);
	len = ft_strlen(s1);
	str = (char *)s1;
	while (*str)
		if (check(*(str++), set))
			len--;
	new = malloc(len + 1);
	if (!new)
		return (NULL);
	str = (char *)s1;
	i = 0;
	while (*str)
		if (!check(*str, set))
			new[i++] = *(str++);
	new[i] = 0;
	return (new);
}

int main()
{
	printf("%s\n", ft_strtrim("lhrpa app wlh", "wal"));
}
