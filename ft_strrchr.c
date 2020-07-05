#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../ft_strrchr.c"


int main()
{
	char str1[] = "abci\0dlcks";
	// char str2[] = "0123456789";
	char *p = strrchr(str1, 'a');
	printf("%s\n",p);

	char *p1 = ft_strrchr(str1, 'a');
	printf("%s\n",p1);
	return (0);
}