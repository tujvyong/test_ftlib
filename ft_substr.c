#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libfttest.h"

void test_function(char *str, unsigned int start, size_t len, char *expected)
{
	char *res = ft_substr(str, start, len);
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
	printf(COLOR_INFO"---ft_substr test---\n"COLOR_CLEAR);

	// test_function("0123456789", 3 ,6 ,"345678");
	test_function("123", 10, 5, "");

	return (0);
}
