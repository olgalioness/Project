Аналогична toupper, только в возвращает в нижнем регистре символы алфавита
#include "libft.h"

int		ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}


int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)					//((c >= 'A') && (c <= 'Z'))
		return (97 + (c - 65));				//return (c + 'a' - 'A');
	else
		return (c);
}

