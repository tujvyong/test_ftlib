#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"


int main()
{
	char str1[] = "0123456789";

	char *p = ft_substr(str1, 3, 6);
	printf("0123456789 -> string\n3, 6 -> start, len\n%s -> res\n------------\n",p);

	p = ft_substr(str1, 2, 3);
	printf("0123456789 -> string\n2, 3 -> start, len\n%s -> res\n------------\n",p);

	p = ft_substr(str1, 100, 4);
	printf("0123456789 -> string\n100, 4 -> start, len\n%s -> res\n------------\n",p);

	p = ft_substr(str1, 3, 0);
	printf("0123456789 -> string\n3, 0 -> start, len\n%s -> res\n------------\n",p);

	p = ft_substr("", 0, 2);
	printf("'' -> string\n0, 0 -> start, len\n%s -> res\n------------\n",p);

	p = ft_substr("123", 10, 5);
	printf("123 -> string\n10, 5 -> start, len\n%s -> res\n------------\n",p);

	return (0);
}
