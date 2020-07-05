#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

int main()
{
	char str1[] = "\0aa\0bbb";
	// char str1[] = "split  ||this|for|me|||||!|";
	// char str1[] = "split       this for   me  !";
	// char str2[] = "abcdefg";
	// char str1[] = NULL;
	// char str2[] = "";

	char **result = ft_split(str1, '\0');
	// int i = count_words_list(str1, ' ');
	// printf("%d\n", i);
	// char *i = count_words_list(str1, 'a');
	// printf("%s\n", i);
	// printf("noused: %s\n", p);
	int i = 0;
	char	**expected = (char*[3]){"aa", "bbb", NULL};
	// char	**expected = (char*[6]){"split  ", "this", "for", "me", "!", NULL};

	while (result[i])
	{
		printf("res: %s\n", result[i]);
		if (strcmp(result[i], *expected))
		{
			printf("failed");
			exit(1);
		}
		free(result[i]);
		i++;
		expected++;
	}

	return (0);
}
