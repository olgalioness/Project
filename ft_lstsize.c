#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		result;
	t_list	*current;

	if (lst == NULL)
		return (0);
	result = 0;
	current = lst;
	while (current != NULL)
	{
		result++;
		current = current->next;
	}
	return (result);
}
