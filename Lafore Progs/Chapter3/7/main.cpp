/*
 * Напишите программу, рассчитывающую сумму денег, которые вы получите при вложении начальной
 * суммы с фиксированной процентной ставкой дохода через определенное количество лет.
 * Пользователь должен вводить с клавиатуры начальный вклад, число лет и процентную ставку.
 */

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    short int sum = 0, years = 0;
    float per = 0, lastsum = 0;
    cout << "Введите начальный вклад: ";
    cin >> sum;
    cout << "Введите число лет: ";
    cin >> years;
    cout << "Введите процентную ставку: ";
    cin >> per;
    per = per / 100;
    lastsum = sum + ( sum * per);
    cout << "Через " << years;

    if (years % 10 == 1)
    {
        cout << " год ";
    }

    else
    {

        if (years % 10 == 2 || years % 10 == 3 || years % 10 == 4)
        {
            cout << " года ";
        }

        else
        {
            cout << " лет ";
        }
    }

    cout << "вы получите " << lastsum << " долларов." << endl;

    return 0;
}
