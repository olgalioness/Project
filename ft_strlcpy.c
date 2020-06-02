#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	length;
	size_t	index;

	if (src == NULL)
		return (0);
	length = ft_strlen(src);
	if (size == 0)
		return (length);
	if (length + 1 > size)
		length = size - 1;
	index = 0;
	while (index < length)
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (ft_strlen(src));
}
