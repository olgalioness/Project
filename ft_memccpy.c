#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*dest;
	const char	*source;

	dest = dst;
	source = src;
	while (n > 0)
	{
		*dest = *source;
		if (*dest == (char)c)
			return (dest + 1);
		dest++;
		source++;
		n--;
	}
	return (NULL);
}
