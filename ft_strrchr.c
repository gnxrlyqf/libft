/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchetoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:49:46 by mchetoui          #+#    #+#             */
/*   Updated: 2024/11/03 02:39:07 by mchetoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
		if (((unsigned char *)s)[i--] == (unsigned char)c)
			return ((char *)s + i + 1);
	return (NULL);
}
