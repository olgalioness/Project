
#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		result;
	t_list	*current;		не обязателен (мы можем двигать сам лист потому что там копия ссылка и ничего с ней не случится)

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


пробежаться по всем и посчитать длинну
