#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../ft_memccpy.c"


int main()
{
	char str1[] = "0123456789";
	char str2[] = "0123456789";
	char *p = memccpy(str1+2, "*/*", '/', 3);
	printf("%s\n",str1);
	printf("%p\n", p);

	char *p1 = ft_memccpy(str2+2, "*/*", '/', 3);
	printf("%s\n",str2);
	printf("%p\n", p1);
	return (0);
}