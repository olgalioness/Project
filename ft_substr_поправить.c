

#include "libft.h"
 start проверка больше чем длина *s
 start если больше длины  s  - вернуть пустую строку \0 выделить память под один символ и вернуть 0
вырезаем под строку и молочим память
 вырезает строку начиная со старт и длинны len
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	length;
	size_t	index;

	if (s == NULL)
		return (NULL);
	length = ft_strlen(s) - start;    					вставили строку вырезанную из s - start
	if (length > len)									если полученная строки больше len - обрезаем под len
		length = len;
	result = NULL;											указатель приравняли к нулю
	result = (char*)malloc(sizeof(char) * (length + 1));	выделили память под строку указатель
	if (result == NULL)										если память не выделилась то null
		return (NULL);
	index = 0;
	while (index < length)                              записали в маллок
	{
		result[index] = s[start + index];    		    добавляем к старту
		index++;										вырезаем по номеру.  start становиться на 0 позицию и к нему дописывается все осталбное (мб обрезано по  len)
	}
	result[index] = '\0';
	return (result);

	строка мамапападоча

	папу

}
