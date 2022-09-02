
/*
 * Реализуйте функцию swap_min, которая принимает на вход двумерный массив целых чисел,
 * ищет в этом массиве строку, содержащую наименьшее среди всех элементов массива значение,
 * и меняет эту строку местами с первой строкой массива.
 *
 * Подумайте, как обменять строки массива, не обменивая элементы строк по-отдельности.
 *
 * Требования к реализации: при выполнении этого задания вы можете определять любые
 * вспомогательные функции. Вводить или выводить что-либо не нужно.
 * Реализовывать функцию main не нужно.
 */

#include <cstring>
#include <iostream>

void swap_min(int *m[], unsigned rows, unsigned cols)
{
    // объявление переменных
    int min = m[0][0];
    unsigned int row = 0;

    // поиск наименьшего элемента
    for (unsigned int i = 0; i < rows; i++)
    {
        for (unsigned int j = 0; j < cols; j++)
        {
            if (m[i][j] < min)
            {
                min = m[i][j]; // запись наименьшего элемента
                row = i;       // запись соответствующей строки
            }
        }
    }

    // одномерные массивы на стеке для преобразования
    int m_new[rows * cols];
    int m_row[cols];

    // запись данных двумерного массива в одномерный
    for (unsigned int i = 0; i < rows; i++)
    {
        for (unsigned int j = 0; j < cols; j++)
        {
            m_new[i * cols + j] = m[i][j];
        }
    }

    // копирование первой строки
    memcpy(m_row, m_new, sizeof (m_row));

    // запись row строки на место первой
    for (unsigned int k = 0; k < cols; k++)
    {
        m_new[k] = m_new[row * cols + k];
    }

    // запись первой строки на место row
    for (unsigned int l = row * cols, p = 0; p < cols; l++, p++)
    {
        m_new[l] = m_row[p];
    }

    // обновление двумерного массива
    for (unsigned int i = 0; i < rows; i++)
    {
        for (unsigned int j = 0; j < cols; j++)
        {
            m[i][j] = m_new[i * cols + j];
        }
    }
}
