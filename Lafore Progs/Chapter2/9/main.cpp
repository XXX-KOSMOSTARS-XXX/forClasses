/* Две дроби a/b c/d можно сложить следующим образом:
 * a/b + c/d = (a*d + b*c)/(b*d)
 * Например, 1/4 + 2/3 = (1*3 + 4*2)/4*3=11/12
 * Напишите программу, запрашивающую у пользователя значения двух дробей,
 * а затем выводящую результат, также записанный в форме дроби.
 */

#include <iostream>

using namespace std;

int main()
{
    int div0 = 0, denom0 = 0, div1 = 0, denom1 = 0, div2 = 0, denom2 = 0;
    char dummychar;

    cout << "Enter the first fraction: " << endl;
    cin >> div0 >> dummychar >> denom0;

    cout << endl << "Enter the second fraction: " << endl;
    cin >> div1 >> dummychar >> denom1;

    div2 = div0 * denom1 + div1 * denom0;
    denom2 = denom0 * denom1;

    cout << endl << "The sum is: " << div2 << "/" << denom2 << endl;
    return 0;
}
