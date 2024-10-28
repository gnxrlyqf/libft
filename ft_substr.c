/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchetoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 16:20:52 by mchetoui          #+#    #+#             */
/*   Updated: 2024/10/27 23:22:48 by mchetoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t remlen;
	char *new;

	if (!len || !ft_strlen(s))
		return (malloc(0));
	if ((int)start > ft_strlen(s) - 1)
		return (NULL);
	remlen = (size_t)ft_strlen(s) - start;
	remlen = (remlen > len) * len + (remlen <= len) * remlen;
	new = malloc(1 + remlen);
	if (!new)
		return (NULL);
	new[remlen] = 0;
	len = -1;
	while (++len < remlen)
		*(new++) = *(s++ + start);
	return (new - len);
}
