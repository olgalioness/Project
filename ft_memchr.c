ищет в n байтах начиная с s (unsigned char)c. Возвращает указатель на байт c, если он был найден и возвращает NULL если c нет в заданном диапазоне.

#include "libft.h"
ищет заданный символ и возвращаем на него указатель если он среди н не нашелся возвращаем нул
void	*ft_memchr(const void *s, int c, size_t n)
{														не больше этого кол-во байт
	const char	*result;

	result = s;
	while (n > 0)
	{
		if (*result == (char)c)
			return ((void*)result);
		result++;
		n--;
	}
	return (NULL);
}

идет с начала , а счетчик с конца...
