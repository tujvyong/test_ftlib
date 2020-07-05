#include <stdio.h>
#include <ctype.h>
#include "../ft_isalnum.c"


int main()
{

	printf("%d %d\n", isalnum('d'), ft_isalnum('d'));
	printf("%d %d\n", isalnum('1'), ft_isalnum('1'));
	printf("%d %d\n", isalnum('?'), ft_isalnum('?'));

	return (0);
}