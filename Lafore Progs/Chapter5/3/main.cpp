/* Напишите функцию с именем zeroSmaller(), в которую передаются с помощью
 * ссылок два аргумента типа инт, присваивающую меньшему из аргументов нулевое
 * значение. Напишите программу для проверки работы функции.
 */

#include <iostream>

using namespace std;

int zeroSmaller(int& x, int& y);

int main()
{
    int x1 = 0, y1 = 0;
    cout << "Enter the first number: ";
    cin >> x1;
    cout << endl << "Enter the second number: ";
    cin >> y1;
    cout << endl << "The result of the function zeroSmaller(): " << zeroSmaller(x1,y1) << endl << endl;

    return 0;
}

int zeroSmaller(int& x, int& y)
{
    if (x < y)
    {
        x = 0;
        return y;
    }
    else {
        y = 0;
        return x;
    }
}
