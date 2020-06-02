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
