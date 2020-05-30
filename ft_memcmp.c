сравнивает n байт между s1 и s2. Возвращает 0 если диапазоны памяти одинаковы и (unsigned char)s1 - (unsigned char)s2 если были встречены разные байты.

#include "libft.h"
сравниваем память посимвольно
int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*a;
	const char	*b;

	if (n == 0)
		return (0);
	a = (char*)s1;						преобразование в символ
	b = (char*)s2;                      преобразование в символ
	while (*a == *b)
	{
		n--;
		if (n == 0)							пока не кончатся символы   число size_t
			return (0);
		a++;
		b++;
	}
	return ((unsigned char)*a - (unsigned char)*b);			возвращаем число было похоже на разницу.
	 														в одну сторону только больше. бит старший 128 не вносит проблем
															 вконце нужно вывести разницу
}
