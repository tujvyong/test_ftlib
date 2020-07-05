#include <stdio.h>
#include <ctype.h>
#include "../ft_isdigit.c"


int main()
{

	printf("%d %d\n", isdigit('d'), ft_isdigit('d'));
	printf("%d %d\n", isdigit('1'), ft_isdigit('1'));
	printf("%d %d\n", isdigit('?'), ft_isdigit('?'));

	return (0);
}