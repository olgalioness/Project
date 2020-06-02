#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t src_length;
	size_t dst_length;
	size_t index;
	size_t result;

	src_length = ft_strlen(src);
	dst_length = ft_strlen(dst);
	result = src_length + dst_length;
	if (src_length + dst_length + 1 > size)
	{
		if (dst_length >= size)
		{
			result = src_length + size;
			src_length = 0;
		}
		else
			src_length = size - 1 - dst_length;
	}
	index = -1;
	while (++index < src_length)
		dst[dst_length + index] = src[index];
	if (size > 0)
		dst[dst_length + index] = '\0';
	return (result);
}
