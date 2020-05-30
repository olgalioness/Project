вывод числа типа int.

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	const int base = 10;

	if (fd < 0)
		return ;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n < base)
		ft_putchar_fd(n + '0', fd);
	if (n >= base)
	{
		ft_putnbr_fd(n / base, fd);
		ft_putchar_fd(n % base + '0', fd);
	}
}



#include "libft.h"

static int	ft_count_digits(int nb)
{
	int digits;
	int current;

	digits = 1;
	current = nb / 10;
	while (current != 0)
	{
		digits++;
		current /= 10;
	}
	return (digits);
}

static int	ft_get_multiplier(int digits)
{
	int result;

	result = 1;
	while (digits > 1)
	{
		result *= 10;
		digits--;
	}
	return (result);
}

void		ft_putnbr_fd(int n, int fd)
{
	int digits;
	int multiplier;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		if (n == -2147483648)
		{
			ft_putchar_fd('2', fd);
			n = -147483648;
		}
		n = -n;
	}
	digits = ft_count_digits(n);
	multiplier = ft_get_multiplier(digits);
	while (digits > 0)
	{
		ft_putchar_fd(n / multiplier + 48, fd);
		n %= multiplier;
		multiplier /= 10;
		digits--;
	}
}
