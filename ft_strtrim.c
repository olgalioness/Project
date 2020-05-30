удаляет пробельные символы (пробел, \t, \n) из начала и конца строки s и возвращает указатель на эту измененную копию. Возвращает NULL в случае ошибки.

//ft_strtrim("123456", '0')
#include "libft.h"

static int	ft_contains(const char *set, char symbol)				//видна только этому файлу можно вызывать только в этом файле, не включать в хеадер
{
	while (*set != '\0')											проверяет если ли в этом сете заданный символ
	{
		if (*set == symbol)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)				сначала с конца отпиливаем а потом сначла отпиливаем
{
	int		length;
	char	*result;
	int		first;
	int		index;

	if (s1 == NULL)
		return (NULL);
	length = ft_strlen(s1);
	while (length > 0 && ft_contains(set, s1[length - 1]))		lengt уменьшается если вконце симвлол в ходит  входит в отсекаемый набор
		length--;													 нашли и обрезали, еще раз нашли и обрезали, не нашли и успокоились
	first = 0;															с начала
	while (first < length && ft_contains(set, s1[first]))				если содержится в запрещенный наборе то сдвигаем указатель
		first++;
	result = NULL;
	result = (char*)malloc(sizeof(char) * (length - first + 1));
	if (result == NULL)
		return (NULL);
	index = 0;
	while (index < length - first)										обрезанную разницу начала и конца записать в маллок
	{
		result[index] = s1[first + index];
		index++;
	}
	result[index] = '\0';
	return (result);
}

lengt уменьшается если вконце симвлол в ходит  входит в отсекаемый набор  а потом
