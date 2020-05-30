работает аналогично функции ft_memcpy(копирует n байт из блока src в блок dst. Возвращает указатель на dst. Для копирования данных в пересекающихся диапазонах адресов (в таких случаях используйте ft_memmove).), но корректно копирует данные при пересекающихся диапазонах памяти.

destination < source тоесть если уель лежит ниже  то мы копируется снизу, чтобы не затереть, а если выше то идем сверху, чтобы не перезатереть данные которые копируем
едем сверху или снизу

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)    мама   1234     5
{
	char		*destination;
	const char	*source;

	destination = (char*)dst;							при копировании есть шанс перезатерерь себя... шкобы копировать нужно в порядке
	source = (char*)src;
	if (destination == NULL && source == NULL)
		return (NULL);
	if (destination < source)         					если цель лежит ниже  копируем  с начала
		while (len > 0)
		{
			*destination = *source;
			destination++;
			source++;
			len--;
		}
	else												в любом другом случае копируем с конца
		while (len > 0)
		{
			*(destination + len - 1) = *(source + len - 1);       (len - 1) = [0]
			len--;
		}
	return (dst);
}
