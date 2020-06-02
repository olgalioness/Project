#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (65 + (c - 97));
	else
		return (c);
}
