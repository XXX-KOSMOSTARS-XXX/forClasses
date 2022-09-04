/* Создайте структуру типа дэйт, содержащую три поля типа инт:
 * месяц, день и год. Попросите пользователя ввести день, месяц
 * и год в формате 31/12/2002, сохраните введенное значение в
 * структурной переменной, а затем извлеките данные из этой
 * переменной и выведите их на экран в том же формате, в каком
 * они вводились.
 */

#include <iostream>

using namespace std;

struct date
{
    int day = 0, month = 0, year = 0;
};

int main()
{
    date newdate;
    char some;
    cout << "Enter the date in the format 31/12/2002: ";
    cin >> newdate.day >> some >> newdate.month >> some >> newdate.year;

    cout << endl << "You entered a date: " << newdate.day << "/" << newdate.month << "/" << newdate.year << endl << endl;

    return 0;
}
