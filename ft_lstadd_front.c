/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchetoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 22:07:27 by mchetoui          #+#    #+#             */
/*   Updated: 2024/10/27 23:20:19 by mchetoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list *curr;

	if (!lst || !*lst || !new)
		return ;
	curr = *lst;
	while (curr->next)
		curr = curr->next;
	curr->next = new;
}
