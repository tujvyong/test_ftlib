#include <stdio.h>
#include "../libft.h"

void test_function(char *content, char *expect)
{
	t_list	*el;

	el = ft_lstnew(content);
	if (strcmp(el->content, expect))
	{
		printf("Failed\n");
		printf("[Your response]\n content: %s\n", el->content);
		printf("[expect response]\n content: %s\n", expect);
	}
	else
		printf("Success! %s\n", el->content);

}

int main()
{
	test_function("This function create new list", "This function create new list");
	return (0);
}
