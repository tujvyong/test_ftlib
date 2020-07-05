#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libfttest.h"


void test_function(char *dest, char *src, size_t len)
{
	char *ori = strnstr(dest, src, len);
	char *ft = ft_strnstr(dest, src, len);

	printf("%s\n", ori);
	printf("%s\n", ft);
}

int main()
{
	test_function("0123456789", "345", 5);
	test_function("AAABCD", "AABC", 6);
	return (0);
}
