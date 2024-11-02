/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchetoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:20:46 by mchetoui          #+#    #+#             */
/*   Updated: 2024/11/02 21:43:34 by mchetoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned long	i;

	i = 0;
	while (((unsigned char *)s)[i] != (unsigned char)c && i < n)
		i++;
	if (!n || i == n)
		return (NULL);
	return ((unsigned char *)s + i);
}
