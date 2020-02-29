
#include <unistd.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}

int		nearby(int n)
{
	return (n - n % 3);
}
