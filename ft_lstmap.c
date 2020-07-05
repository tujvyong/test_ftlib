#include <stdio.h>
#include "../libft.h"

void	del(void *el)
{
	free(el);
}

void	*iterator(void *item)
{
	(void)item;
	return "new!";
}

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

	list = test_lstnew(strdup("No need your help"));
	list->next = test_lstnew(strdup("i'm a engineer"));
	list->next->next = test_lstnew(strdup("who are you?"));

	result = ft_lstmap(list, iterator, del);
	while (result != NULL)
	{
		printf("%s\n", result->content);
		result = result->next;
	}
}
