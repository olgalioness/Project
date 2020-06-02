// 1. Создайте функцию, которая будет отображать цифры, в одну строку, в порядке возрастнания.
//    > Create a function that displays all digits, on a single line, by ascending order.

#include <unistd.h>

int main()
{
    int i;
    char z;

    i = 0;
    while (i <= 9)
    {
        z = i + '0';
        write(1, &z, 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}
