#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../ft_atoi.c"


int main()
{
	// char str1[] = "  \t\v-2147483648";
	char str1[] = "99999999999999999999999999";
	// char str2[] = "0123456789";
	int p = atoi(str1);
	printf("%d\n",p);

	int p1 = ft_atoi(str1);
	printf("%d\n",p1);
	return (0);
}
