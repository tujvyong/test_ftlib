#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libfttest.h"


void test_function(char *dest, char *src, char *expected)
{
	char *res = ft_strjoin(dest, src);
	printf("%s\n", expected);
	printf(COLOR_YOURS"%s\n"COLOR_CLEAR, res);
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
	printf(COLOR_INFO"---ft_strjoin test---\n"COLOR_CLEAR);

	test_function("0123", "asdf", "0123asdf");
	test_function("", "", "");

	return (0);
}
