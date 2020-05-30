Применяет к каждому элементу списка функцию (*f) изменяя сами элементы

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	current = lst;
	while (current != NULL)
	{
		(*f)(current->content);
		current = current->next;
	}
}


указатель на функцию... это функцию применить к элементам списка (басик фурич)
