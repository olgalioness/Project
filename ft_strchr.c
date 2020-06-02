#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		length;
	char	*new_s;

	length = ft_strlen(s);
	new_s = (char*)s;
	while (length >= 0)
	{
		if (*new_s == (char)c)
			return (new_s);
		new_s++;
		length--;
	}
	return (NULL);
}
