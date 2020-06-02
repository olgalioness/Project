//Создайте функцию, которая будет выводить алфовит с маленькой буквы, в одну строку, в порядке возрастания, начиная с буквы 'a'

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}
}

int main()
{
    ft_print_alphabet();
    return (0);
}
