/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchetoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 22:11:12 by mchetoui          #+#    #+#             */
/*   Updated: 2024/11/03 03:54:38 by mchetoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned long	i;

	if (dest == src)
		return (dest);
	i = -1;
	while (++i < n)
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
	return (dest);
}
