#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current;
	t_list	*newborn;
	t_list	*first;
	void	*data;

	if (lst != NULL)
	{
		if ((data = (*f)(lst->content)) == NULL)
			(*del)(data);
		if ((first = ft_lstnew(data)) == NULL)
			return (NULL);
		current = lst->next;
	}
	else
		return (NULL);
	while (current != NULL)
	{
		if ((data = (*f)(current->content)) == NULL)
			(*del)(data);
		if ((newborn = ft_lstnew(data)) == NULL)
			return (NULL);
		ft_lstadd_back(&first, newborn);
		current = current->next;
	}
	return (first);
}
