#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void del(void *content)
{
	free(content);
}

void print(void *str)
{
	printf("%s\n", (char *)str);
}

int main()
{
	t_list *head = ft_lstnew(ft_strdup("1"));
	
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("2")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("3")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("4")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("5")));

	print(ft_lstlast(head)->content);
	ft_lstclear(&head, del);
	print(ft_lstlast(head)->content);
	if (!head)
		return (0);
	return (1);
}
