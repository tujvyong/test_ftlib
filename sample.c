#include <stdlib.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i])
	{
		if (s1[0] == s2[i])
			return (1);
		i++;
	}
	return (0);
}

char	*trim_str(char *str, char *charset)
{
	int i;
	int flag;

	while (*str)
	{
		flag = 0;
		i = 0;
		while (charset[i])
		{
			if (*str == charset[i++])
			{
				++str;
				flag = 1;
			}
		}
		if (flag == 0)
			return (str);
	}
	return (str);
}

int		count_arr_size(char *str, char *charset)
{
	int		arr_count;
	char	*temp;

	arr_count = 0;
	str = trim_str(str, charset);
	temp = str;
	if (!*temp)
		return (-1);
	while (*temp)
	{
		if (ft_strcmp(temp, charset))
		{
			temp = trim_str(temp, charset);
			if (*temp)
				arr_count++;
		}
		++temp;
	}
	if (arr_count != 0)
		arr_count++;
	return (arr_count);
}

int		count_str_size(char *str, char *charset)
{
	int i;
	int char_count;

	char_count = 0;
	i = 0;
	str = trim_str(str, charset);
	while (ft_strcmp(str, charset) == 0 && *str)
	{
		char_count++;
		++str;
		i++;
	}
	return (char_count);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		k;
	char	**result;
	int		arr_count;
	int		char_count;

	arr_count = count_arr_size(str, charset);
	if (!(result = (char **)malloc(sizeof(char *) * (arr_count + 1))))
		return (0);
	i = 0;
	while (i < arr_count || (i == 0 && arr_count != -1))
	{
		char_count = count_str_size(str, charset);
		if (!(result[i] = (char *)malloc(sizeof(char) * (char_count + 1))))
			return (0);
		str = trim_str(str, charset);
		k = 0;
		while (k < char_count)
			result[i][k++] = *str++;
		result[i][k] = '\0';
		i++;
	}
	result[i] = 0;
	return (result);
}


void test_function(char *str, char *sep)
{
	int i;

	i = 0;
	char **res = ft_split(str, sep);
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
}
int main(){
	// test_function("abcdef", "xx");
	test_function("          ", " ");
	return (0);
}
