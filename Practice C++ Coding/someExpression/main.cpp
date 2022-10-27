/*
 * Запрограммировать следующее выражение: (а + b — f / а) + f * a * a — (a + b)
 * Числа а, b, f вводятся с клавиатуры. Организовать пользовательский интерфейс,
 * таким образом, чтобы было понятно, в каком порядке должны вводиться числа.
 */

#include <QCoreApplication>
#include <iostream>

using namespace std;

double res (const int& a, const int& b, const int& f);

int main(int argc, char *argv[])
{
    QCoreApplication c(argc, argv);

    int a = 0, b = 0, f = 0;

    cout << "Enter a = ";
    cin >> a;
    cout << endl << "Enter b = ";
    cin >> b;
    cout << endl << "Enter f = ";
    cin >> f;

    cout << endl << "(a + b - f / a) + f * a * a - (a + b) = " << res(a, b, f);

    return c.exec();
}

double res (const int& a, const int& b, const int& f)
{
    double result = 0, num = 0;

    result += (a + b);
    num = f;
    num /= a;
    result -= num;
    num = f * a * a;
    result += num;
    result -= (a + b);

    return result;
};
