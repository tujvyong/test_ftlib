#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../ft_strncmp.c"


int main()
{
	// char str1[] = "01234";
	char str2[] = "\200";

	// int p = strncmp(str1, "0123", 7);
	// printf("%d\n",p);

	// int p1 = ft_strncmp(str1, "0123", 7);
	// printf("%d\n",p1);

	int ori = strncmp(str2, "\0", 1);
	int res = ft_strncmp(str2, "\0", 1);
	printf("%d\n", ori);
	printf("%d\n", res);

	// char *s1 = "\x12\xff\x65\x12\xbd\xde\xad";
	// char *s2 = "\x12\x02";

	// int ori = strncmp(s1, s2, 1);
	// int res = ft_strncmp(s1, s2, 1);
	// printf("%d\n", ori);
	// printf("%d\n", res);
	
	return (0);
}