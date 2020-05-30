Создает новый элемент списка

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*result;

	result = NULL;
	result = malloc(sizeof(t_list));  //есть ли свободная память
	if (result == NULL)					//если нет возвращаем нул
		return (NULL);
	result->content = content;			//последний элемент структуры всегда указывает на ноль.
	result->next = NULL;				//в элемент структуры присвоить значение нулевого указателя
	return (result);
}

content хранит данные    void любые
next - хранит адрес лседующего элемента


создаем список и возвращаем на него ссылку 13 день бассейна
