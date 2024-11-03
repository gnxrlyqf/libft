/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchetoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 23:38:10 by mchetoui          #+#    #+#             */
/*   Updated: 2024/11/03 02:38:19 by mchetoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char const *src, size_t size)
{
	size_t	i;
	size_t	sl;
	size_t	dl;

	i = 0;
	sl = ft_strlen(src);
	dl = ft_strlen(dest);
	if (!size)
		return (ft_strlen(src));
	if (!*src)
		return ((dl < size) * dl + (dl >= size) * size);
	if (size <= dl)
		return (sl + size);
	while (src[i] && i < size - 1 - dl)
	{
		dest[dl + i] = src[i];
		i++;
	}
	dest[dl + i] = 0;
	return (dl + sl);
}
