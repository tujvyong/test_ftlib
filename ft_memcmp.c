#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../ft_memcmp.c"


int main()
{
	char str1[] = "0123456789";
	char str2[] = "0123456789";
	int ori = memcmp(str1, str2, 5);
	printf("%d\n",ori);

	int result = ft_memcmp(str1, str2, 5);
	printf("%d\n",result);
	return (0);
}