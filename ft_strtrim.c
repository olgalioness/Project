#include "libft.h"

static int	ft_contains(const char *set, char symbol)
{
	while (*set != '\0')
	{
		if (*set == symbol)
			return (1);
		set++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int		length;
	char	*result;
	int		first;
	int		index;

	if (s1 == NULL)
		return (NULL);
	length = ft_strlen(s1);
	while (length > 0 && ft_contains(set, s1[length - 1]))
		length--;
	first = 0;
	while (first < length && ft_contains(set, s1[first]))
		first++;
	result = NULL;
	result = (char*)malloc(sizeof(char) * (length - first + 1));
	if (result == NULL)
		return (NULL);
	index = 0;
	while (index < length - first)
	{
		result[index] = s1[first + index];
		index++;
	}
	result[index] = '\0';
	return (result);
}
