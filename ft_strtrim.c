#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"


int main()
{
	char str1[] = "  t";
	char str2[] = "";

	char *p = ft_strtrim(str1, str2);
	printf("%s\n",p);

	return (0);
}