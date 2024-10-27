/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchetoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:32:07 by mchetoui          #+#    #+#             */
/*   Updated: 2024/10/24 23:03:46 by mchetoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(char *big, char *little, size_t len)
{
	int	i;
	int j;
	char *temp;

	if (!big || !little || !*little || !len)
		return (big);
	i = 0;
	while (big[i] && i < (int)len)
	{
		if (big[i] == *little)
		{
			j = i;
			temp = little;
			while (*temp && *temp == big[j++])
				temp++;	
			if (!*temp)
				return (big + i);
		}
		i++;
	}
	return (NULL);
}
