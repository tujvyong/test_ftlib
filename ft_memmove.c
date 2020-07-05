#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../ft_memmove.c"


int main()
{
	char str1[] = "0123456789";
	char str2[] = "0123456789";
	memmove(str1+2, str1, 5);
	printf("%s\n",str1);

	ft_memmove(str2+2, str2, 5);
	printf("%s\n",str2);
	return (0);
}
