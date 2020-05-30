

 free коментарий

  make должен как минимум содержать перечень этих правил

память должна ыть освобождена когда требуется
cтрока бьется на массив строк по разделителю

#include "libft.h"

static const char	*ft_skip_delimiters(const char *s, char c)
{
	while (*s == c)							что он есть и просто сдвинули
		s++;
	return (s);
}

static int			ft_word_count(const char *s, char c)
{
	int	result;

	result = 0;
	while (*s != '\0')
	{
		s = ft_skip_delimiters(s, c);     нашли перво слово
		if (*s != '\0')
		{
			while (*s != '\0' && *s != c)   прочли слово
				s++;
		}
	}
	return (result);
}

static int			ft_get_next(const char *s, char c)
{
	int		result;

	result = 0;
	while (*s != '\0' && *s != c)
	{
		s++;
		result++;
	}
	return (result);
}

char				**ft_split(char const *s, char c)
{
	int		words;
	char	**result;
	int		word_index;
	int		length;

	if (s == NULL)
		return (NULL);
	words = ft_word_count(s, c);
	result = (char**)malloc(sizeof(char*) * (words + 1));   массив указатель
	if (result == NULL)
		return (NULL);
	word_index = 0;
	while (word_index < words)
	{
		s = ft_skip_delimiters(s, c);        пока меньше скипаем
		length = ft_get_next(s, c);				дошли до слова и взяли длину
		result[word_index] = (char*)malloc(sizeof(char) * (length + 1));      выделили память
		if (result[word_index] == NULL)
			return (NULL);									не получилоь возвращаем нул и освободить память
		ft_strlcpy(result[word_index], s, length + 1);
		s += length;
		word_index++;
	}
	result[word_index] = NULL;
	return (result);
}


int main()
{

	char *str = "gfgfgdfgfdgdgdgdg";
	char c ='h';
	ft_split(str,c)
}
  **** тот что залила

#include "libft.h"

static	size_t	ft_split_len(char const *s, char c)
{
	size_t i;

	i = 0;
	while (*s && *s != c)
	{
		i++;
		s++;
	}
	return (i);
}

static	size_t	ft_split_num(char const *s, char c)
{
	int i;

	i = 0;
	if (*s == c)
		i = -1;
	while (*s)
	{
		if (*s == c && *(s + 1) != c && *(s + 1) != '\0')
			i++;
		s++;
	}
	if (i == -1)
		return (0);
	return (i);
}

static	char	**ft_split_it(char const *s, char c)
{
	int		len;
	int		i;
	char	**new_s;

	if (!(new_s = (char**)malloc(sizeof(char*) * (ft_split_num(s, c) + 2))))
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = ft_split_len(s, c);
			if (!(new_s[i] = (char*)malloc(sizeof(char) * len + 1)))
			{
				while (i-- != 0)
					free(new_s[i]);
				return (NULL);
			}
			ft_strlcpy(new_s[i++], s, len + 1);
			s = s + len - 1;
		}
		s++;
	}
	new_s[i] = 0;
	return (new_s);
}

char			**ft_split(char const *s, char c)
{
	char	**new_s;

	if (!s)
		return (NULL);
	new_s = ft_split_it(s, c);
	return (new_s);
}
