/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchetoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:20:46 by mchetoui          #+#    #+#             */
/*   Updated: 2024/10/23 21:52:14 by mchetoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned long i;
	char *str;

	i = 0;
	str = (char *)s;
	while (*str != c && i < n)
	{
		str++;
		i++;
	}
	return (str);
}
