#include <stdio.h>
#include "libfttest.h"

void test_function(char *content, char *expect)
{
	t_list	*el;

	printf(COLOR_INFO"---ft_lstnew test---\n"COLOR_CLEAR);
	el = ft_lstnew(content);
	if (strcmp(el->content, expect))
	{
		printf("%s\n", expect);
		printf(COLOR_YOURS"%s\n"COLOR_CLEAR, el->content);
		printf(COLOR_FAILED"\nFailed\n\n"COLOR_CLEAR);
	}
	else
	{
		printf("%s\n", expect);
		printf(COLOR_YOURS"%s\n"COLOR_CLEAR, el->content);
		printf(COLOR_SUCCESS"\nSuccess!\n\n"COLOR_CLEAR);
	}

}

int main()
{
	test_function("This function create new list", "This function create new list");
	return (0);
}
