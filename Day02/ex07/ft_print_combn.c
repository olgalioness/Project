// 1. Создайте функцию, выводящую все различные комбинации n чисел, по возрастанию.
//    > Create a function that displays all different combinations of n numbers by ascending order.
// 2. n должно быть таким, чтобы: 0 < n < 10. // n will be so that: 0 < n < 10.
// 3. Если n == 2, то вот ожидаемый вывод в консоль:
//      $>./a.out | cat -e
//      01, 02, 03, ..., 09, 12, ..., 79, 89$>

#include <unistd.h>

void    ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_print_number(int *p_tab, int p_nb_arr)
{
        int count;

        count = 0;
        while (count < p_nb_arr)
        {
            ft_putchar(p_tab[count] + 48);
            count++;
        }
}

void    ft_print_n_numbers(int* p_tab, int p_foc_indx, int p_nb_indx)
{
        int     count;

        while (1)
        {
            while ((p_tab[p_foc_indx] == (10 + (p_foc_indx - p_nb_indx)))
                    && p_foc_indx >= 0)
            {
                p_foc_indx--;
            }

            if (p_foc_indx < 0)
                break;

            p_tab[p_foc_indx]++;

            count = p_foc_indx + 1;

            while (count <= p_nb_indx)
            {
                p_tab[count] = p_tab[count - 1] + 1;
                count++;
            }

            p_foc_indx = p_nb_indx - 1;

            ft_putchar(',');
            ft_putchar(' ');
            ft_print_number(p_tab, p_nb_indx);
        }
}

void    ft_print_combn(int n)
{
        int     number[9];
        int     foc_indx;
        int     count;

        foc_indx = (n - 1);

        count = 0;
        while (count <= n)
        {
            number[count] = count;
            count++;
        }

        ft_print_number(number, n);

        ft_print_n_numbers(number, foc_indx, n);
}

int main ()
{
    ft_print_combn(2);
}
