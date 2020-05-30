возвращает указатель на строку являющуюся результатом присоединения строки s2 к строке s1 или NULL в случае ошибки.
на утечки проряли не критично
#include "libft.h"
склеивает две строки с выделение памяти
char    *    ft_strjoin(char const *s1, char const *s2)
{
	int		l1;
	int		l2;
	char	*result;
	int		index;

	if (s1 == NULL || s2 == NULL)					подаем пустую строку1 или строку2
		return (NULL);       						null - это 0 приведенный к типу void*
	l1 = ft_strlen(s1);				размеп строки 1
	l2 = ft_strlen(s2);				размер строки 2
	result = NULL;					установили указатель на null
	result = (char*)malloc(sizeof(char) * (l1 + l2 + 1));
	if (result == NULL)
		return (NULL);
	index = 0;
	while (*s1 != '\0')
		result[index++] = *s1++;
	while (*s2 != '\0')
		result[index++] = *s2++;
	result[index] = '\0';
	return (result);
}
