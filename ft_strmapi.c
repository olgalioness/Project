#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_s;
	unsigned int	index;

	index = 0;
	if (s == NULL)
		return (NULL);
	new_s = NULL;
	new_s = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (new_s == NULL)
		return (NULL);
	while (s[index] != '\0')
	{
		new_s[index] = (*f)(index, s[index]);
		index++;
	}
	new_s[index] = '\0';
	return (new_s);
}
