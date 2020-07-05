#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"


int main()
{
	// char str1[] = "0123456789";
	// char str2[] = "abcdefg";
	char str1[] = "";
	char str2[] = "";

	char *p = ft_strjoin(str1, str2);
	printf("%s\n",p);

	return (0);
}
