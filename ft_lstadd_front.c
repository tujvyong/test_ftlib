#include <stdio.h>
#include "../libft.h"

int main()
{
	t_list **list = NULL;
	t_list *head = NULL;
	t_list *tail = NULL;
	int		i;

	i = 0;
	list = malloc(sizeof(t_list **) * 5);
	while (i < 4)
	{
		list[i] = malloc(sizeof(t_list *));
		list[i]->content = i % 2 == 0 ? "iは偶数やで" : "iは奇数やで";
		if (!head && !tail)
		{
			head = list[i];
			tail = list[i];
		}
		else
		{
			tail->next = list[i];
			tail = list[i];
		}
		tail->next = NULL;
		i++;
	}

	t_list *result;
	result = malloc(sizeof(t_list));
	result->content = "新しいnodeやで";
	ft_lstadd_front(list, result);

	head = list[0];
	t_list *current = head;
	while (1)
	{
		printf("%s\n", current->content);
		if (current->next == NULL)
			break;
		current = current->next;
	}
}
