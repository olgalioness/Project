#include "libft.h"

size_t	count_words(char const *s, char c)
{
	size_t	cnt;
	size_t	inword;

	cnt = 0;
	inword = 0;
	while (*s != '\0')
	{
		if (inword == 0 && *s != c && *s != '\0')
		{
			cnt++;
			inword = 1;
		}
		else if (inword == 1 && *s == c)
			inword = 0;
		s++;
	}
	return (cnt);
}

size_t	word_len(char const *w, char c)
{
	size_t	i;

	i = 0;
	while (w[i] != c && w[i] != '\0')
		i++;
	return (i);
}

char	*copy_word(char const *s, char c)
{
	size_t	i;
	char	*word;

	i = 0;
	word = (char *)malloc(sizeof(*s) * (word_len(s, c) + 1));
	if (!word)
		return (NULL);
	while (*s != c && *s != '\0')
		word[i++] = *s++;
	word[i] = '\0';
	return (word);
}

void	ft_freetab(char **str, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
		free(str[i]);
	free(str);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	i;

	i = 0;
	res = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!s || !res)
		return (NULL);
	while (*s != '\0')
	{
		if (*s == c)
			s++;
		if (*s != c && *s != '\0')
		{
			if (!(res[i++] = copy_word(s, c)))
			{
				ft_freetab(res, count_words(s, c));
				return (NULL);
			}
			s += word_len(s, c);
		}
	}
	res[i] = NULL;
	return (res);
}
