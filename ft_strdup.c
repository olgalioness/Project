//копирует строки в выделенную память под нее возвращает копию строки s1 или NULL в случае ошибки.
//Выделяет память и переносит в нее копию строки str и  **NULL** в случае ошибки.
/*копирование нового слова (строки с выделением памяти

char	*ft_strdup(const char *str)
{
	char	*dest;

	if (!(dest = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	return (ft_strcpy(dest, str));
}
*/
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
    int	count;

    count = 0;
    while (str[count])
        count++;
    return (count);
}

char	*ft_strdup(const char *s1)
{
    int		size;
    char	*temp;
    int		counter;

    temp = NULL;                                        //прировняли указатель к 0
    size = ft_strlen(s1) + 1;                            //посчитали кол-во символов  +1 для '\0' по условию строка нул терминейт
    temp = (char*)malloc(sizeof(char) * size);          //выделили память под кол-во символов типа char
    //size = ft_strlen(s1);
	//	temp = (char *)malloc((size + 1) * sizeof(*temp));
	if (temp == NULL)                                  //проверили на свободную память
        return (NULL);
    counter = 0;
	//while (s1[counter] != '\0')
    while (counter < size)                              //пока счетчик меньше кол-ва символов считаем и записываем в массив маллока
    {
        temp[counter] = s1[counter];
        counter++;
    }
    return (temp);                                      //вернули строку с зарезервированной памятью под нее
}   //temp[counter] = '\0';



int main(void) {
    char *greet = "Salut";
    char *test1 = "Gonna pass this test, even if I gotta dup!\n";
    char *test2 = ft_strdup(test1);

    printf("%s\n", ft_strdup(greet));
    printf("test1: %s", test1);
    printf("test2: %s", test2);
    return 0;
}

/*

char	*ft_strdup(char *src)
{
	int		i;
	int		length;
	char	*strcpy;

	length = 0;
	while (src[length])                 //while (*sptr++)       ;
		length++;                       //посчитали кол-во символов в строке
	strcpy = malloc(length + 1);        //выделили память под кол-во символов + 0 строка
	if (strcpy != NULL)                 // если дали свободную память
	{
		i = 0;                          //счетчик 0
		while (src[i])                  //цикл массив от счетчика - строка
		{
			strcpy[i] = src[i];         //записываем посимвольно каждый символ
			i++;
		}
		strcpy[i] = '\0';               //добавляем нуль символ
	}
	return (strcpy);                    //возвращаем записанную строку
}                                       //


#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	char	*sptr;
	char	*dptr;

	sptr = src;
	while (*sptr++)                         //увеличили каждый символ + один
		;
	dup = malloc(sptr - src + 1);           //выделили память (удалили одну строку*2 из другой + 0 символ)
	if (!dup)
		return (NULL);
	dptr = dup;
	while ((*dptr++ = *src++) != '\0')
		;
	return (dup);
}


char *strdup(char *s)
{
char *p;
p = (char *) malloc(strlen(s)+1);
 if (p != NULL)                                                                 //Функция malloc возвращает NULL, если свободного пространства нет; strdup возвращает это же значение,
                                                                                //оставляя заботу о выходе из ошибочной ситуации вызывающей программе.
        strcpy(p, s);
    return p;                                                                   //возвращает указатель на свободное пространство, достаточное для хранения одного узла

    */
