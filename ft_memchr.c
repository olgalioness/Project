#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*new_s;

	new_s = s;
	while (n > 0)
	{
		if (*new_s == (char)c)
			return ((void*)new_s);
		new_s++;
		n--;
	}
	return (NULL);
}
