#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*destination;
	const char	*source;

	destination = (char*)dst;
	source = (char*)src;
	if (destination == NULL && source == NULL)
		return (NULL);
	if (destination < source)
		while (len > 0)
		{
			*destination = *source;
			destination++;
			source++;
			len--;
		}
	else
		while (len > 0)
		{
			*(destination + len - 1) = *(source + len - 1);
			len--;
		}
	return (dst);
}
