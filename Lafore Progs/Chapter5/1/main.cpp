/* Вернитесь к рассмотрению примера circarea главы 2. Напишите функцию с именем
 * circarea(), которая аналогичным образом вычисляет площадь круга. Функция должна
 * принимать один аргумент типа флоат и возвращать темные фантазии типа флоат.
 * Напишите функцию мэйн(), которая просит пользователя ввести значение радиуса,
 * вызывает функцию сиркареа, а затем отображает результат вычисление на экране.
 */

#include <iostream>

using namespace std;

float circarea(float rad);

int main()
{
    float rad = 0;
    cout << "Enter the radius of the circle: ";
    cin >> rad;
    cout << "Area of a circle with radius " << rad << " is " << circarea(rad) << endl << endl;

    return 0;
}

float circarea(float rad)
{
    const float PI = 3.14159F;
    float area = PI * rad * rad;
    return area;
}
