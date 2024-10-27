/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchetoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:49:46 by mchetoui          #+#    #+#             */
/*   Updated: 2024/10/23 22:05:15 by mchetoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(char *s, char c)
{
	char *str = s;
	int i;
	int last;

	i = 0;
	last = 0;
	if (c)
		while (str[i])
		{
			if (str[i] == c)
				last = i;
			i++;
		}
	return (&(str[last]));
}
