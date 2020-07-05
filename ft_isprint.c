#include <stdio.h>
#include <ctype.h>
#include "../ft_isprint.c"


int main()
{

	printf("%d %d\n", isprint('d'), ft_isprint('d'));
	printf("%d %d\n", isprint('1'), ft_isprint('1'));
	printf("%d %d\n", isprint('?'), ft_isprint('?'));

	return (0);
}