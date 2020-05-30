Добавляет новый элемент в список(Если список не пустой) в его

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
не надо свдигать указатель на большой первый элемент

добавиить вконец
