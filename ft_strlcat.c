#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libfttest.h"

void check_strlcat(char *dest, char *src, int size)
{
	int original;
	int result;
	char *dup;

	dup = strdup(dest);
	if (dup == NULL)
		return ;
	original = strlcat(dest, src, size);
	result = ft_strlcat(dup, src, size);
	printf("---- original ----\n");
	printf("%s\n", dest);
	printf("%d\n\n", original);

	printf("---- your script ----\n");
	printf("%s\n", dup);
	printf("%d\n\n", result);
}

int main() {
	char *dest;
	// if (!(dest = (char *)malloc(sizeof(*dest) * )))
	// 	return (0);
	dest = "there is no stars in the sky";
	check_strlcat(dest, "the cake is a lie !\0I'm hidden lol\r\n", strlen(dest));
	return (0);
}
