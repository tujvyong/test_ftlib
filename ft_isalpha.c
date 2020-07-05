#include <stdio.h>
#include <ctype.h>
#include "../ft_isalpha.c"


int main()
{

	printf("%d %d\n", isalpha('d'), ft_isalpha('d'));
	printf("%d %d\n", isalpha('Z'), ft_isalpha('Z'));
	printf("%d %d\n", isalpha('?'), ft_isalpha('?'));

	return (0);
}

