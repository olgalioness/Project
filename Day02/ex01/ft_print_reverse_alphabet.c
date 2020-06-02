//Создайте функцию, которая будет выводить алфовит с маленькой буквы, в одну строку, в порядке убывания, начиная с буквы 'z'

#include <unistd.h>

void    ft_reverse_print_alphabet(void)
{
    char    let;

    let = 'z';
    while (let >= 'a')
    {
		write(1, &let, 1);
        let--;
    }
}

int main()
{
    ft_reverse_print_alphabet();
    return (0);
}
