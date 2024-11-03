/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchetoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 23:32:21 by mchetoui          #+#    #+#             */
/*   Updated: 2024/11/03 02:36:08 by mchetoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*temp;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		temp = current;
		current = current->next;
		ft_lstdelone(temp, del);
	}
	*lst = NULL;
}
/*void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *last;

	if (!lst || !*lst || !del)
		return ;
	last = ft_lstlast(*lst);
	while (last)
	{
		ft_lstdelone(last, del);
		last = ft_lstlast(*lst);
	}
	free(*lst);
	*lst = NULL;
}*/
