
/*
 * Реализуйте функцию getline, которая считывает поток ввода посимвольно, пока не достигнет
 * конца потока или не встретит символ переноса строки ('\n'), и возвращает C-style строку
 * с прочитанными символами.
 *
 * Обратите внимание, что так как размер ввода заранее неизвестен, то вам нужно будет
 * перевыделять память в процессе чтения, если в потоке ввода оказалось больше символов,
 * чем вы ожидали.
 *
 * Память, возвращенная из функции будет освобождена оператором delete[]. Символ переноса
 * строки ('\n') добавлять в строку не нужно, но не забудьте, что в конце C-style строки
 * должен быть завершающий нулевой символ.
 *
 * Требования к реализации: при выполнении данного задания вы можете определять любые
 * вспомогательные функции, если они вам нужны. Определять функцию main не нужно.
 */

#include <iostream>

char *resize(const char *str, unsigned size)
{
    // выделение памяти размера new_size
    char *newStr = new char[(2 * size)];

    // копирование данных из переданной области памяти
    for (unsigned int i = 0; i < size; i++)
    {
        newStr[i] = str[i];
    }

    // освобождение старой области памяти
    delete[] str;

    return newStr;
}

char *getline(std::istream& stream = std::cin)
{
    // объявление переменных
    char _str;
    int size = 1024, i = 0; // i - переменная контроля размера

    // выделение памяти
    char *str = new char[size];

    // считывание потока
    while ( (_str = stream.get()) != '\n' && !stream.eof() )
    {
        if (i >= size)      // если вышли за пределы массива
        {
            str = resize(str, size);
            size = 2 * size;
        }

        str[i] = _str;      // запись ввода
        i++;
    }

    str[i] = '\0';
    return str;
}
