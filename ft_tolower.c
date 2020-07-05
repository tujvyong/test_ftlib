#include <stdio.h>
#include <ctype.h>
#include "../ft_tolower.c"


int main()
{

	printf("%c %c\n", tolower('d'), ft_tolower('d'));
	printf("%c %c\n", tolower('1'), ft_tolower('1'));
	printf("%c %c\n", tolower('?'), ft_tolower('?'));
	printf("%c %c\n", tolower('W'), ft_tolower('W'));

	return (0);
}