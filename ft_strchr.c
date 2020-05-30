
ищет (unsigned char)c в строке s и возвращает указатель на него или NULL, если данный символ не был найден.
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		length;				ищем символ в строке, если найден возвращаем позицию(место) если нет возвращаем нул
	char	*result;

	length = ft_strlen(s);   размер всего
	result = (char*)s;		преобразование
	while (length >= 0)
	{
		if (*result == (char)c)  приводин к чару дали интом
			return (result);
		result++;
		length--;
	}
	return (NULL);
}
