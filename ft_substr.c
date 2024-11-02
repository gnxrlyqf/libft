/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchetoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:20:52 by mchetoui          #+#    #+#             */
/*   Updated: 2024/11/02 21:55:12 by mchetoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	remlen;
	char	*new;

	if (!len || !ft_strlen(s) || (int)start > ft_strlen(s) - 1)
		return (ft_strdup(""));
	remlen = (size_t)ft_strlen(s) - start;
	remlen = (remlen > len) * len + (remlen <= len) * remlen;
	new = malloc(remlen + 1);
	if (!new)
		return (NULL);
	new[remlen] = 0;
	len = -1;
	while (++len < remlen)
		*(new++) = *(s++ + start);
	return (new - len);
}
