// 1. Создайте функцию, которая будет отображать цифры, в одну строку, в порядке возрастнания.
//    > Create a function that displays all digits, on a single line, by ascending order.

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	number;

	number = '0';
	while (number <= '9')
	{
		write(1, &number, 1);
		number++;
	}
}

int main()
{
    ft_print_numbers();
    return (0);
}
