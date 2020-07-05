#include <stdio.h>
#include <ctype.h>
#include "../ft_toupper.c"


int main()
{

	printf("%c %c\n", toupper('d'), ft_toupper('d'));
	printf("%c %c\n", toupper('1'), ft_toupper('1'));
	printf("%c %c\n", toupper('?'), ft_toupper('?'));
	printf("%c %c\n", toupper('W'), ft_toupper('W'));

	return (0);
}