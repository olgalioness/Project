// Функция toupper() возвращает прописной эквивалент параметра, в противном случае возвращается без изменений.
 Если с принадлежит алфавитному символу в нижнем регистре, возвращает тот же     */|
|/*  символ в верхнем регистре, иначе ничего не делает.
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <stdio.h>

/*
int		ft_toupper(int c)
{
    if (c >= 'a' && c <= 'z')       //'a' = 97, 'z' = 122, 'A' = 65
        c -= 32;					//преобразование ascii символов к верхнему регистру
    return (c);
}
*/

int	ft_toupper(int c)
{
    if (c >= 97 && c <= 122)
        return (65 + (c - 97));         // return (c + 'A' - 'a');
    else
        return (c);
}

int				main()
{
    putchar(toupper(65));
    putchar(ft_toupper(65));
    putchar(toupper('0'));
    putchar(ft_toupper('0'));
    putchar(toupper('9'));
    putchar(ft_toupper('9'));
    putchar(toupper('a'));
    putchar(ft_toupper('a'));
    putchar(toupper('A'));
    putchar(ft_toupper('A'));
    putchar(toupper(123));
    putchar(ft_toupper(123));
    putchar(toupper('z'));
    putchar(ft_toupper('z'));
    return (0);
}
