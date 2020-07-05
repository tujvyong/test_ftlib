#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../ft_memcpy.c"


int main()
{
	char str1[] = "0123456789";
	char str2[] = "0123456789";
	memcpy(str1+2, "***", 2);
	printf("%s\n",str1);

	ft_memcpy(str2+2, "***", 2);
	printf("%s\n",str2);

	ft_memcpy(NULL, NULL, 2);
	return (0);
}