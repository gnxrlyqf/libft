/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchetoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:11:18 by mchetoui          #+#    #+#             */
/*   Updated: 2024/11/02 14:48:23 by mchetoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int i;
	t_list *curr;

	if (!lst)
		return (0);
	i = 0;
	curr = lst;
	while (curr)
	{
		i++;
		curr = curr->next;
	}
	return (i);
}
