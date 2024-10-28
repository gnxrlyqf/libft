/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchetoui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:59:12 by mchetoui          #+#    #+#             */
/*   Updated: 2024/10/28 21:40:10 by mchetoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <limits.h>

void pass(void *data)
{
	return ;
}

void *edit(void *str)
{
	return ("test");
}

void print(void *str)
{
	printf("%s\n", (char *)str);
}

int main(int ac, char **av)
{
	t_list *head = ft_lstnew("1 - lhrba");

	ft_lstadd_front(&head, ft_lstnew("2 - lhyaba"));	
	ft_lstadd_front(&head, ft_lstnew("3 - l7wa"));

	ft_lstiter(ft_lstmap(head, &edit, &pass), &print);
}
