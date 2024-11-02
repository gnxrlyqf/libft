/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchetoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 02:23:41 by mchetoui          #+#    #+#             */
/*   Updated: 2024/11/02 16:08:31 by mchetoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *head;
	t_list *curr;
	t_list *new;

	if (!lst || !f || !del)
		return (NULL);
	curr = lst;
	while (curr)
	{
		new = ft_lstnew(f(curr->content));
		if (!new)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_front(&head, new);
		curr = curr->next;
	}
	return (head);
}
