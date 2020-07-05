#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../ft_strlcpy.c"

void check_strlcpy(char *dest, char *src, int size)
{
	int original;
	int result;
	char *dup;

	dup = strdup(dest);
	if (dup == NULL)
		return ;
	original = strlcpy(dest, src, size);
	result = ft_strlcpy(dup, src, size);
	printf("---- original ----\n");
	printf("%s\n", dest);
	printf("%d\n\n", original);

	printf("---- your script ----\n");
	printf("%s\n", dup);
	printf("%d\n\n", result);
}

int main() {
	char *dest;
	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))
		return (0);
	check_strlcpy(dest, "dsada", 3);
	return (0);
}