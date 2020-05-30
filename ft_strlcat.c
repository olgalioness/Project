 добавляет содержимое строки s2 в конец строки s1. Ожидается, что под строку s1 выделено достаточно памяти. Возвращает указатель на s1.


 ищет (unsigned char)c в строке s и возвращает указатель на него или NULL, если данный символ не был найден.

#include "libft.h"
//конкатенация строк

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t s_length;
	size_t d_length;
	size_t index;
	size_t result;						то что будем возвращать


	s_length = ft_strlen(src);						5
	d_length = ft_strlen(dst);						6
	result = s_length + d_length;
	if (s_length + d_length + 1 > size)			если сумма выходить за размер
	{
		if (d_length >= size)
		{
			result = s_length + size;			обрезание по буферу 5+2
			s_length = 0; 						0
		}
		else											11
			s_length = size - 1 - d_length;				обрезаем буфер         s_length для сравнения сколько осталось в буфере
	}
	index = -1;
	while (++index < s_length)
		dst[d_length + index] = src[index];			//добавляем к спервой троке вторую строку
	if (size > 0)
		dst[d_length + index] = '\0';				 вконце добавляем ноль
	return (result);                            возвращаем суммарный размер двух строк
}
