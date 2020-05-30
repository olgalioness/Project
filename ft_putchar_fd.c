 вывод символа.

#include "libft.h"

void	ft_putchar_fd(char c, int fd)					 надо обрабатывать юникод, но непонятно как на чар
{
	write(fd, &c, 1);
}
