#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libfttest.h"

void test_function(char *str, char *set, char *expected)
{
	char *res = ft_strtrim(str, set);
	printf("'%s'\n", expected);
	printf(COLOR_YOURS"'%s'\n"COLOR_CLEAR, res);
	if (strcmp(res, expected))
	{
		printf(COLOR_FAILED"\nFailed\n\n"COLOR_CLEAR);
		exit(1);
	}
	free(res);
	printf(COLOR_SUCCESS"\nSuccess!\n\n"COLOR_CLEAR);
}

int main()
{
	printf(COLOR_INFO"---ft_strtrim test---\n"COLOR_CLEAR);

	test_function("", "", "");

	return (0);
}
