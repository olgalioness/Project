//Создайте функцию, которая будет выводить алфовит с маленькой буквы, в одну строку, в порядке убывания, начиная с буквы 'z'

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_reverse_print_alphabet(void)
{
    char    let;

    let = 'z';
    while (let >= 'a')
    {
        ft_putchar(let);
        let--;
    }
}

int main()
{
    ft_reverse_print_alphabet();
    return (0);
}
