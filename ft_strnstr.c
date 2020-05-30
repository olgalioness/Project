работает аналогично ft_strstr(в строке haystack ищет подстроку needle и возвращает указатель на начало найденного совпадения, иначе NULL.),
но ограничивается len символами строки haystack.
Нaсколько я понял у тебя во внутреннем цикле должно быть изменено условие на while big[i_big + i_lil] == little[i_lil] && little[i_lil] != ‘\0’
Также в теле внутреннего цикла ты инкрементируешь i_lil и i_big но по идее нужно инкрементировать i_lil только. Также в if - внутреннего цикла нужно заменить условие на  (i_big + i_lil <=  len - 1 && little[i_lil] == ‘\0’) Ну и в результате выводить (char*)&big[i_big]
Конкретно, по поводу пустой строки little. Если твоей функции передать пустой little, то она вернет NULL (возможно я не прав, сужу чисто по скриншоту кода). Чтобы она возвращала big нужно добавить условие вначале функции такого типа if (*little == ‘\0’)
		return ((char *)big);
сли я правильно поняль твою пробелму изначально, то ты хочешь узнать является ли little пустой строкой. Если это так, условие должно быть типа этого if (*little == ‘\0’)
		return ((char *)big); У тебя же в коде ты проверяешь является ли little NULL или нет. *little == ‘\0’) и !(little)  - это не одно и тоже.

#include "libft.h"


ищем подстроку в строке         242448244924829    44      10

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*result;
	size_t	length;
	size_t	limit;
	size_t	index;
	size_t	match;

	result = (char*)haystack;
	length = ft_strlen(needle);
	if (length == 0)									в условии если подстрока 0, то возвращаем начало строки
		return (result);
	if ((limit = ft_strlen(haystack)) > len)
		limit = len;
	index = 0;
	while (index + length <= limit)						подстрока короче строки или равна
	{
		match = 0;										число совпавших символов
		while (needle[match] == result[index + match])		12345678   c позиции 4 например  4+0 4+1
		{
			if (match == length - 1)						если mach дошел доконца(если maч равен длине подсроки)
				return (result + index);					возвращаем указатель на начало найденной подстроки
			match++;
		}
		index++;
	}
	return (NULL);
}
