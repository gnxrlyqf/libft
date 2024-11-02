/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchetoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 00:09:36 by mchetoui          #+#    #+#             */
/*   Updated: 2024/11/02 21:54:40 by mchetoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	check(char c, char const *set)
{
	while (*set)
	{
		if (*(set++) == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*new;

	len = ft_strlen(s1);
	while (--len && check(s1[len], set))
		;
	if (!len)
		return (ft_strdup(""));
	i = -1;
	while (s1[++i] && check(s1[i], set))
		len--;
	new = malloc(++len + 1);
	if (!new)
		return (NULL);
	ft_memset(new, 'o', len);
	new[len] = 0;
	while (*new)
		*(new++) = s1[i++];
	return (new - len);
}
