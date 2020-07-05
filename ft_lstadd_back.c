#include <stdio.h>
#include "../libft.h"

t_list		*test_lstnew(void *content)
{
	t_list	*result;

	if (!(result = malloc(sizeof(t_list))))
		return (NULL);
	result->content = content;
	result->next = NULL;
	return (result);
}

int main()
{
	t_list *list = NULL;
	t_list *new = NULL;

	list = test_lstnew(strdup("huu"));
	new = test_lstnew(strdup("yeeeah"));

	ft_lstadd_back(&list, new);
	while (list != NULL)
	{
		printf("%s\n", list->content);
		list = list->next;
	}
}
