/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchetoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 23:17:52 by mchetoui          #+#    #+#             */
/*   Updated: 2024/11/02 21:34:02 by mchetoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <limits.h>
#include <stddef.h>
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*new;

	if (!nmemb || !size)
		return (malloc(0));
	if (nmemb * size > UINT_MAX || size > UINT_MAX || nmemb > UINT_MAX)
		return (NULL);
	new = malloc(nmemb * size);
	if (!new)
		return (NULL);
	ft_bzero(new, nmemb * size);
	return (new);
}
