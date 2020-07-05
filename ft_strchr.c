#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../ft_strchr.c"


int main()
{
	char str1[] = "0123456789";
	// char str2[] = "0123456789";
	char *p = strchr(str1, '\0');
	printf("%p\n",p);

	char *p1 = ft_strchr(str1, '\0');
	printf("%p\n",p1);
	return (0);
}