/* Библиотечная функция islower() принимает в качестве аргумента один символ (букву)
 * и возвращает ненулевое целое значение в том случае, если буква является строчной,
 * и ненулевое, если буква является заглавной. Описание функции хранится в файле
 * CTYPE.H. Напишите программу, которая принимает одну букву от пользователя, а затем
 * выводит нулевое или ненулевое значение в зависимости от того, является ли буква строчной.
 */

#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    char a;
    cout << "Enter a lowercase or uppercase letter: ";
    cin >> a;
    cout << endl << "If It's a lowercase letter the answer will be 1"
         << endl << "If It's a uppercase letter the answer will be 0"
         << endl << endl << "Answer: ";

    if (!islower(a))
    {
        cout << 0 << endl;
    }

    else cout << 1 << endl;

    return 0;
}
