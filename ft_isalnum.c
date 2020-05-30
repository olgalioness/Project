возвращает ненулевое значение, если символ c является символом английского алфавита или цифрой.

#include "libft.h"

int		ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))   если с принадлежит алфавиту или цифру
		return (1);
	return (0);
}
