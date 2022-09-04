/* Напишите программу, выводящую следующую таблицу:
 *  1990    135
 *  1991    7290
 *  1992    14580
 *  1993    16200
 * В программе использовать только один оператор с cout.
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x = 1990;
    int y = 135;
    cout << x << setw(10) << y << endl << x + 1 << setw(10) << y * 54 << endl
         << x + 2 << setw(10) << y * 108 << endl << x + 3 << setw(10) << y * 120 << endl;

    return 0;
}
