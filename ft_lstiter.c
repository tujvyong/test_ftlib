#include <stdio.h>
#include "../libft.h"

void	iterator(void *item)
{
	printf("%s\n", (unsigned char*)item);
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

	list = test_lstnew(strdup("huu"));
	list->next = test_lstnew(strdup("yeeeah"));
	list->next->next = test_lstnew(strdup("boooom"));

	ft_lstiter(list, iterator);
}
