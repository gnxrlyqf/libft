/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchetoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 22:44:09 by mchetoui          #+#    #+#             */
/*   Updated: 2024/10/23 23:22:48 by mchetoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned long i;

	if (!dest || !src)
		return (NULL);
	if (dest == src)
		return (dest);
	i = 0;
	//handle overlap
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}
