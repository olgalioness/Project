#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*target;

	target = (char*)b;
	while (len > 0)
	{
		*target = (char)c;
		len--;
		target++;
	}
	return (b);
}
