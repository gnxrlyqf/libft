#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void print(void *str)
{
	printf("%s\n", (char *)str);
}

int main()
{
	t_list *head = ft_lstnew("1");
	
	ft_lstadd_back(&head, ft_lstnew("2"));
	ft_lstadd_back(&head, ft_lstnew("3"));
	ft_lstadd_back(&head, ft_lstnew("4"));
	ft_lstadd_back(&head, ft_lstnew("5"));

	printf("%s\n", (char *)(ft_lstlast(head)->content));

}
