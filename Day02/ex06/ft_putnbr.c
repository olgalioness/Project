// 1. Создайте функцию, которая выводит введенный номер, в параметр этой функции. Функция должна иметь возможность отображать все возможные значения внутри переменной типа int.
//    > Create a function that displays the number entered as a parameter. The function has to be able to display all possible values within an int type variable.
// 2. Here’s how it should be prototyped: void ft_putnbr(int nb);
// 3. Для примера: ft_putnbr(42) выведет "42". // For example: ft_putnbr(42) displays "42".

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(-nb / 10);
		ft_putchar('8');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
		ft_putnbr(nb);
	}
	else if (0 <= nb && nb < 10)
	{
		ft_putchar(nb + '0');
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

int main()
{

    printf("==== ex06 ft_putnbr ====\n");
	{
		printf("==== Putting: '-100' ====\n");
		ft_putnbr(-100);
		printf("\n");

		printf("==== Putting: '0' ====\n");
		ft_putnbr(0);
		printf("\n");

		printf("==== Putting: '123 ===='\n");
		ft_putnbr(123);
		printf("\n");

		printf("==== Putting: INT_MAX '2147483647' ====\n");
		ft_putnbr(2147483647);
		printf("\n");

		printf("==== Putting: INT_MIN '-2147483648' ====\n");
		ft_putnbr(-2147483648);
		printf("\n");
	}
	return(0);
}
