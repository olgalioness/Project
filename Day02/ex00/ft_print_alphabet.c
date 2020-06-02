//Создайте функцию, которая будет выводить алфовит с маленькой буквы, в одну строку, в порядке возрастания, начиная с буквы 'a'

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 'a';
	while (letter <= 'z')
	{
		write(1, &letter, 1);
		letter++;
	}
}

int main()
{
    ft_print_alphabet();
    return (0);
}
