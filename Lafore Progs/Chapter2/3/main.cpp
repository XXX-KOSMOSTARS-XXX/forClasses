/* Напишите программу, генерирующую следующий вывод:
 * 10
 * 20
 * 19
 * Используйте представление числа 10 в виде целой константы. Для вывода числа 20 воспользуйтесь
 * одной из арифметических операций с присваиванием, а для вывода числа 19 - операцией декремента.
 */

#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    cout << x << endl;
    x *= 2;
    cout << x << endl;
    --x;
    cout << x << endl;

    return 0;
}