// 1. Создайте функцию, которая будет выводить 'N' или 'P' в зависимости от введенного целочисленного числа в параметр этой функции.

#include <unistd.h>
#include <stdio.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else if (n >= 0)
		write(1, "P", 1);
}

int main()
{

    printf("==== ex03 ft_is_negative ====\n");
	{
		printf("==== Putting: '100' ====\n");
		ft_is_negative(100);
		printf("\n");

		printf("==== Putting: '-100' ====\n");
		ft_is_negative(-100);
		printf("\n");

		printf("==== Putting: '0' ===='\n");
		ft_is_negative(0);
		printf("\n");

		printf("==== Putting: '1' ====\n");
		ft_is_negative(1);
		printf("\n");

		printf("==== Putting: '-1' ====\n");
    	ft_is_negative(-1);
		printf("\n");
	}
	return(0);
}
