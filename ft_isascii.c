#include <stdio.h>
#include <ctype.h>
#include "../ft_isascii.c"


int main()
{

	printf("%d %d\n", isascii('d'), ft_isascii('d'));
	printf("%d %d\n", isascii('1'), ft_isascii('1'));
	printf("%d %d\n", isascii('?'), ft_isascii('?'));

	return (0);
}