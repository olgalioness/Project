#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*new_count;

	new_count = NULL;
	new_count = malloc(count * size);
	if (new_count == NULL)
		return (NULL);
	ft_bzero(new_count, count * size);
	return (new_count);
}
