#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		l1;
	int		l2;
	char	*new_s;
	int		index;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	new_s = NULL;
	new_s = (char*)malloc(sizeof(char) * (l1 + l2 + 1));
	if (new_s == NULL)
		return (NULL);
	index = 0;
	while (*s1 != '\0')
		new_s[index++] = *s1++;
	while (*s2 != '\0')
		new_s[index++] = *s2++;
	new_s[index] = '\0';
	return (new_s);
}
