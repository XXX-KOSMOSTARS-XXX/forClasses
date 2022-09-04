/* Предположим, вы хотите создать таблицу умножения на заданное число. Напишите
 * программу, которая позволяет пользователю ввести это число, а затем генерирует
 * таблицу размером 20 строк на 10 столбцов.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x = 0, y = 1;
    cout << "Enter the number: ";
    cin >> x;

    for (int k = 0; k < 20; k++)
    {
        for (int i = 0; i < 10; i++)
        {
            cout << setw (5) << x * y << " ";
            y++;
        }
        cout << endl;
    }

    return 0;
}
