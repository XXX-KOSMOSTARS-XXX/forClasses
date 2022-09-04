/* Температуру, измеренную в градусах по Цельсию, можно перевести в градусы по Фаренгейту
 * путем умножения на 9/5 и сложения с числом 32. Напишите программу, которая запрашивает
 * температуру в градусах по Цельсию и отображающую ее эквивалент по Фаренгейту.
 */

#include <iostream>

using namespace std;

int main()
{
    double temp = 0.0;
    cout << "Enter the temperature in degrees Celsius: ";
    cin >> temp;
    cout << endl << "The temperature in Fahrenheit: " << temp * 9 / 5 + 32 << endl;

    return 0;
}
