// 1. Создайте функцию, отображающую все различные комбинации двух цифр от 00 до 99, перечисленные по возрастанию.
//    	00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99$>

#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	digit1;
	int	digit2;

	digit1 = -1;
	while (digit1++ <= 97)
	{
		digit2 = digit1;
		while (digit2++ <= 98)
		{
			ft_putchar((digit1 / 10) + '0');
			ft_putchar((digit1 % 10) + '0');
			ft_putchar(' ');
			ft_putchar((digit2 / 10) + '0');
			ft_putchar((digit2 % 10) + '0');
			if (digit1 != 98 || digit2 != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}

int main()
{
    ft_print_comb2();
    return(0);
}
