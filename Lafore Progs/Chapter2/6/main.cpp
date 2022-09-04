/* На биржевых торгах за 1 фунт стерлингов давали $1.487, за франк - $0.172,
 * за немецкую марку - $0.584, а за японскую йену - $0.00955. Напишите программу,
 * которая запрашивает денежную сумму в долларах, а затем выводит эквивалентные суммы
 * в других валютах.
 */

#include <iostream>

using namespace std;

int main()
{
    double sum = 0.0;

    cout << "Enter dollar amount: ";
    cin >> sum;

    cout << "GBP: " << sum * 1.487 << endl << "Franc: " << sum * 0.172 << endl
         << "German mark: " << sum * 0.584 << endl << "Yen: " << sum * 0.00955 << endl;

    return 0;
}
