/* Считая, что кубический фут равен 7.481 галлона, написать программу,
 * запрашивающую у пользователя число галлонов и выводящую на экран
 * эквивалентный объем в кубических футах
 */

#include <iostream>

using namespace std;

int main()
{
    double G = 0;
    cout << "Enter the number of gallons G = ";
    cin >> G;
    double V = G/7.481;
    cout << "The volume in ft3 V = " << V << endl;
}
