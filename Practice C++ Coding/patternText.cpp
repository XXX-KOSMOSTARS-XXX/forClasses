
/*
 * Напишите функцию поиска первого вхождения шаблона в текст. В качестве первого параметра
 * функция принимает текст (C-style строка), в которой нужно искать шаблон. В качестве
 * второго параметра строку-шаблон (C-style строка), которую нужно найти. Функция
 * возвращает позицию первого вхождения строки-шаблона, если он присутствует в строке
 * (помните, что в C++ принято считать с 0), и -1, если шаблона в тексте нет.
 *
 * Учтите, что пустой шаблон (строка длины 0) можно найти в любом месте текста.
 *
 * Требования к реализации: при выполнении данного задания вы можете определять любые
 * вспомогательные функции, если они вам нужны. Вводить или выводить что-либо не нужно.
 * Реализовывать функцию main не нужно.
 */

int strstr(const char *text, const char *pattern)
{
    int counter = 0;    // счетчик для pattern
    int first = -1;     // возвращаемое значение

    if (*pattern == '\0')
    {
        return 0;
    }

    for (int i = 0; text[i] != '\0'; i++)
    {

        if (text[i] == pattern[counter])    // есть совпадение
        {

            if (counter == 0) first = i;    // если нулевой счетчик, записываем положение

            counter++;

            if (pattern[counter] == '\0')   // если дошли до конца pattern, выходим из цикла
                return first;               // единственный выход, когда в text есть pattern

        }

        else
        {

            if (text[i] == pattern[0])      // если заново начинаем
            {
                first = i;
                counter = 1;
            }

            else
            {
                first = -1;
                counter = 0;
            }
        }
    }

    first = -1;
    return first; // если дошли до конца text, не найдя pattern
}

