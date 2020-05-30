Применяет ф-ию (*f) к каждому элементу списка и возвращает новый сформированный
список в который помещает каждый модефицированный элемент

#include "libft.h"

неверно

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))  функция для вычисления и функция для удаления
{						из данных делает другие данные
	t_list	*current;
	t_list	*newborn;
	t_list	*first;
	void	*data;

	if (lst != NULL)								если где-то оборвалось что-то случилось то удалить
	{
		if ((data = (*f)(lst->content)) == NULL)  во время обработки что-то случилось
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
		ft_lstadd_back(&first, newborn);						берем адрес главы
		current = current->next;								надо создать новый список из результатов обработанных данных
	}
	return (first);
}



одна преобразует данные а вторая удаляет
