работает аналогично ft_strchr(ищет (unsigned char)c в строке s и возвращает указатель на него или NULL,
если данный символ не был найден.),

но осуществляет поиск символа с конца строки в начало.

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		length;
	char	*result;

	length = ft_strlen(s);						ищет символ с конца в строке
	result = (char*)s;
	result += length;
	while (length >= 0)     9876543210    <=9    ..result !=s пока мы не вернемся в начало
	{
		if (*result == (char)c)
			return (result);				вначе определяем длинну
		result--;						она идет справо налево слева, если просто чар идет слева по стреке то эта справа
		length--;
	}
	return (NULL);
}
