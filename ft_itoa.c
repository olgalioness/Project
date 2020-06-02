#include "libft.h"

static int	ft_size(int n)
{
	int digits;
	int current;

	digits = 1;
	current = n / 10;
	while (current != 0)
	{
		digits++;
		current /= 10;
	}
	return (digits);
}

static int	ft_multiplier(int digits)
{
	int	result;

	result = 1;
	while (digits > 1)
	{
		result *= 10;
		digits--;
	}
	return (result);
}

static char	*ft_fill_result(char *result, int n)
{
	int		index;
	int		digits;
	int		multiplier;

	index = 0;
	if (n < 0)
	{
		result[index++] = '-';
		n = -n;
	}
	digits = ft_size(n);
	multiplier = ft_multiplier(digits);
	while (digits > 0)
	{
		result[index++] = n / multiplier + 48;
		n %= multiplier;
		multiplier /= 10;
		digits--;
	}
	result[index] = '\0';
	return (result);
}

char		*ft_itoa(int n)
{
	char	*result;
	int		minus;

	minus = 0;
	if (n < 0)
		minus = 1;
	result = NULL;
	result = (char*)malloc(sizeof(char) * (ft_size(n) + minus + 1));
	if (result == NULL)
		return (NULL);
	if (n == -2147483648)
	{
		ft_strlcpy(result, "-2147483648", 12);
		return (result);
	}
	result = ft_fill_result(result, n);
	return (result);
}
