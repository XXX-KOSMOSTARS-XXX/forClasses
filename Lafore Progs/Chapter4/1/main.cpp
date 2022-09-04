/* Номер телефона, например, (212) 767 - 8900 можно условно разделить на три части
 * код города (212), номер телефонной станции (767) и номер абонента (8900).
 * Напишите программу с использованием структуры, ползволяющую раздельно хранить эти
 * три части телефонного номера. Назовите структуру phone. Создайте две структурные
 * переменные типа phone. Инициализацию одной из них произведите сами, а значения для
 * другой запросите с клавиатуры. Затем выведите содержимое обеих переменных на экрна.
 */

#include <iostream>

using namespace std;

struct phone
{
    string kod, numst, numab;
};

int main()
{
    phone mine, yours;
    mine.kod = "915";
    mine.numst = "001";
    mine.numab = "1923";

    cout << "Enter the area code, station number and subscriber number: ";
    cin >> yours.kod >> yours.numst >> yours.numab;

    cout << endl << "My number: (" << mine.kod << ") " << mine.numst << " - " << mine.numab << endl;
    cout << "Your number: (" << yours.kod << ") " << yours.numst << " - " << yours.numab << endl;
    return 0;
}
