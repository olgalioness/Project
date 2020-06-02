#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		length;
	char	*result;

	length = ft_strlen(s);
	result = (char*)s;
	result += length;
	while (length >= 0)
	{
		if (*result == (char)c)
			return (result);
		result--;
		length--;
	}
	return (NULL);
}
