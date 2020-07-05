#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../ft_memset.c"


int main()
{
	char str1[] = "0123456789";
	char str2[] = "0123456789";
	memset(str1+2, '*', 5);
	printf("%s\n",str1);

	ft_memset(str2+2, '*', 5);
	printf("%s\n",str2);
	return (0);
}
