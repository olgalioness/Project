#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		size;
	char	*temp;
	int		counter;

	temp = NULL;
	size = ft_strlen(s1) + 1;
	temp = (char*)malloc(sizeof(char) * size);
	if (temp == NULL)
		return (NULL);
	counter = 0;
	while (counter < size)
	{
		temp[counter] = s1[counter];
		counter++;
	}
	return (temp);
}
