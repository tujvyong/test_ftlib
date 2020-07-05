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
	t_list *result = NULL;

	list = test_lstnew(strdup("huu"));
	list->next = test_lstnew(strdup("yeeeah"));
	list->next->next = test_lstnew(strdup("boooom"));

	result = ft_lstlast(list);
	printf("%s\n", result->content);
}
