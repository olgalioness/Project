#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*result;
	size_t	length;
	size_t	limit;
	size_t	index;
	size_t	match;

	result = (char*)haystack;
	length = ft_strlen(needle);
	if (length == 0)
		return (result);
	if ((limit = ft_strlen(haystack)) > len)
		limit = len;
	index = 0;
	while (index + length <= limit)
	{
		match = 0;
		while (needle[match] == result[index + match])
		{
			if (match == length - 1)
				return (result + index);
			match++;
		}
		index++;
	}
	return (NULL);
}
