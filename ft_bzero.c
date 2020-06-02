#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*target;

	target = s;
	while (n > 0)
	{
		*target = '\0';
		target++;
		n--;
	}
}
