/* Напишите программу, выполняющую действия, обратные тем, котороые описаны
 * в упражнении 10, то есть запрашивающую у пользователя сумму, указанную в
 * десятичных фунта, и переводящую ее в старую систему.
 */

#include <iostream>

using namespace std;

int main()
{
    float fd = 0, sh = 0, p = 0;
    int f = 0;

    cout << "Enter the number of decimal pounds: ";
    cin >> fd;
    f = static_cast<int>(fd);
    p = fd - f;

    p *= 240;
    sh = p / 12;

    cout << endl << "The old format: #" << f << "." << sh << endl;

    return 0;
}
