#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libfttest.h"

void test_function(char *str, char sep, char **expected)
{
	int i;

	printf(COLOR_INFO"---ft_split test---\n"COLOR_CLEAR);
	i = 0;
	char **res = ft_split(str, sep);
	while (res[i])
	{
		printf("%s:", *expected);
		printf(COLOR_YOURS"%s\n"COLOR_CLEAR, res[i]);
		if (strcmp(*expected, res[i]))
		{
			printf(COLOR_FAILED"\nFailed\n\n"COLOR_CLEAR);
			exit(1);
		}
		free(res[i]);
		i++;
		*expected++;
	}
	free(res);
	printf(COLOR_SUCCESS"\nSuccess!\n\n"COLOR_CLEAR);
}

int main()
{
	test_function("  split  this   for me   !   ", ' ', (char*[6]){"split", "this", "for", "me", "!", NULL});
	test_function("          ", ' ', (char*[1]){""});
	test_function("abcdef", 'x', (char*[1]){"abcdef", NULL});
	test_function("\0aa\0bbb", '\0', NULL);

	return (0);
}
