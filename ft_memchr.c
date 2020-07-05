#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../ft_memchr.c"


int main()
{
	char str1[] = "0123456789";
	// char str2[] = "0123456789";
	char *p = memchr(str1+2, '3', 5);
	printf("%p\n",p);

	char *p1 = ft_memchr(str1+2, '3', 5);
	printf("%p\n",p1);
	return (0);
}