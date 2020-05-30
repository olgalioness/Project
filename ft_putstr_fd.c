вывод n символов строки str. Ровно n символов будет выведено, даже в том случае, если длина строки меньше указанного числа.
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s != NULL)
		write(fd, s, ft_strlen(s));
}
