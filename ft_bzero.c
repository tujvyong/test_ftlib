#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../ft_bzero.c"

int main()
{
    char str1[] = "0123456789";
	char str2[] = "0123456789";
    bzero(str1, 3);
    printf("%d\n", str1);

    ft_bzero(str2, 3);
    printf("%d\n", str2);
}