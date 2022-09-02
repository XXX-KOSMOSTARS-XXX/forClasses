
/*
 * В этой задаче вам нужно реализовать функцию resize. Функция resize принимает на вход
 * три аргумента: указатель на область памяти, выделенную с помощью оператора new[],
 * размер области (size) и новый размер (new_size). Функция должна выделить память
 * размера new_size, скопировать в нее данные из переданной области памяти, освободить
 * старую область памяти и вернуть выделенную область памяти нового размера со скопированными данными.
 *
 * Обратите внимание, что память, возвращенная из функции, будет освобождена с помощью оператора delete[].
 * Несмотря на то, что входной тип данных — это const char *, не стоит рассчитывать, что там хранится
 * C-style строка. При выполнении задания также учтите, что new_size может быть меньше size.
 *
 * Требования к реализации: при выполнении данного задания вы можете определять любые
 * вспомогательные функции. Вводить или выводить что-либо не нужно. Определять функцию main не нужно.
 */

char *resize(const char *str, unsigned size, unsigned new_size)
{
    // указатель на область памяти, выделенную с помощью оператора new[], размер области (size) и новый размер (new_size)

    // выделение памяти размера new_size
    char *newStr = new char [new_size];

    // копирование данных из переданной области памяти
    for (unsigned int i = 0; i < size; i++)
    {
        if(i < new_size)
        {
            newStr[i] = str[i];
        }
    }

    // освобождение старой области памяти
    delete[] str;

    return newStr;
}
