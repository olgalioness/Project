#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t index;

	if (n == 0)
		return (0);
	index = 0;
	while (s1[index] == s2[index] && index < n)
	{
		if (s1[index] == '\0')
			return (0);
		index++;
		if (index == n)
			return (0);
	}
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}
