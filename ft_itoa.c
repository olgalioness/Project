 переводит число типа int в строку. Возвращает NULL в случае ошибки выделения памяти.


#include "libft.h"

static int	ft_get_length(const char *str)
{
	int	result;

	result = 0;
	while (*str >= '0' && *str <= '9')
	{
		result++;
		str++;
	}
	return (result);
}

static int	ft_get_mul(int digits)
{
	int	result;

	result = 1;
	while (digits > 0)
	{
		result *= 10;
		digits--;
	}
	return (result);
}

static int	ft_get_spaces(const char *s)
{
	int	result;

	result = 0;
	while (*s == ' ' || *s == '\t' || *s == '\n' || \
	*s == '\v' || *s == '\r' || *s == '\f')
	{
		result++;
		s++;
	}
	return (result);
}

int			ft_atoi(const char *str)
{
	int	res;
	int length;
	int curr;
	int sign;

	str += ft_get_spaces(str);
	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	length = ft_get_length(str);
	if (length > 19 && sign == -1)
		return (0);
	else if (length > 19 && sign == 1)
		return (-1);
	res = 0;
	curr = -1;
	while (++curr < length)
		res += (str[curr] - 48) * sign * ft_get_mul(length - curr - 1);
	return (res);
}



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
		result *= 10;                   10 в степени н
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
