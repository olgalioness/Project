// 1. Создайте функцию, которая будет выводить 'N' или 'P' в зависимости от введенного целочисленного числа в параметр этой функции.

#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else if (n >= 0)
		ft_putchar('P');
}

int main()
{
    ft_is_negative(100);
    ft_is_negative(-1);
    ft_is_negative(0);
    ft_is_negative(100);
    ft_is_negative(-100);
    return(0);
}
