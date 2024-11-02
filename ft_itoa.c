/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchetoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 01:02:04 by mchetoui          #+#    #+#             */
/*   Updated: 2024/11/02 21:37:50 by mchetoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <limits.h>
#include <stdio.h>

int	count_digits(long n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n > 9)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		len;
	long	num;
	char	*new;

	num = (long)((n >= 0) * n) - ((n < 0) * n);
	len = count_digits((long)n);
	new = malloc(len + 1);
	if (!new)
		return (NULL);
	new[0] = ((n < 0) * '-') + ((!n) * '0');
	new[len] = 0;
	while (num > 0)
	{
		new[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (new);
}
