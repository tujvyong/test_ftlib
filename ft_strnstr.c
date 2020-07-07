#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libfttest.h"


void test_function(char *dest, char *src, size_t len)
{
	char *ori = strnstr(dest, src, len);
	char *ft = ft_strnstr(dest, src, len);

	printf(COLOR_INFO"---ft_strnstr test---\n"COLOR_CLEAR);
	printf("%s : %s : %zu\n\n", dest, src, len);
	printf("%s\n", ori);
	printf(COLOR_YOURS"%s\n"COLOR_CLEAR, ft);
	if (ori == ft)
		printf(COLOR_SUCCESS"\nSuccess!\n\n"COLOR_CLEAR);
	else
		printf(COLOR_FAILED"\nFailed\n\n"COLOR_CLEAR);
}

int main()
{
	test_function("0123456789", "345", 5);
	test_function("AAABCD", "AABC", 6);
	test_function("abc", "bc", 0);
	test_function("abc", "xxxxx", 4);
	test_function("abcd", "bc", -1);
	return (0);
}
