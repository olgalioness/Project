#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*new_s1;
	const char	*new_s2;

	if (n == 0)
		return (0);
	new_s1 = (char*)s1;
	new_s2 = (char*)s2;
	while (*new_s1 == *new_s2)
	{
		n--;
		if (n == 0)
			return (0);
		new_s1++;
		new_s2++;
	}
	return ((unsigned char)*new_s1 - (unsigned char)*new_s2);
}
