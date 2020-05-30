#include <stdlib.h>

// копирует n байт из блока src в блок dst. Возвращает указатель на dst. Для копирования данных в пересекающихся диапазонах адресов (в таких случаях используйте ft_memmove).


void	*ft_memcpy(void *dst, const void *src, int n)			//size_t
{
    char		*destination;		(или  unsi)	 когда одно из другого вычитаем то важен старший бит, а если сравниваем то неважно
    const char	*source;

    destination = (char*)dst;							// копирует n символов
    source = (char*)src;
    if (destination == NULL && source == NULL)			//теже ошибки что оригинал. он не падает когда один, з
	ащита работает когда они оба
														//if (!dest && !src)
        return (NULL);									//когда один должен падать
    while (n > 0)
    {
        *destination = *source;
        destination++;
        source++;
        n--;
    }
    return (dst);
}
без защиты от возможных перекрытий
int main(){
    unsigned int n = 10;
    char buff[n];
    char *src = "boom";

    char *r = ft_memcpy(buff, src, n);
    printf(r);

    return 0;
}
 не написала защиту от возможных перекрытий
