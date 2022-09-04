/* Создайте структуку с именем employee, содержащую два поля:
 * номер сотрудника типа int и величину его пособия в долларах
 * типа float. Запросите с клавиатуры данные о трех сотрудниках,
 * сохраните их в трех структурных переменных типа employee
 * и выведите их на экран в том же формате, в каком они вводились.
 */

#include <iostream>
#include <iomanip>

using namespace std;

struct emplyee
{
    int num = 0;
    float sal = 0;
};

int main()
{
    emplyee p1, p2, p3;
    int counter = 3;

    while (counter > 0)
    {
        int numx = 0;
        float salx = 0;

        cout << endl << "Enter information about the employee number: ";
        cin >> numx;
        cout << endl << "Enter data on the salary of employee number " << numx << ": ";
        cin >> salx;

        if (counter == 3)
        {
            p1.num = numx;
            p1.sal = salx;
        }

        else if (counter == 2)
        {
            p2.num = numx;
            p2.sal = salx;
        }

        else if (counter == 1)
        {
            p3.num = numx;
            p3.sal = salx;
        }

        counter--;
    }

    cout << endl << "Employee information entered: " << endl;

    cout << endl << "Employee number: " << endl << setw(8) << p1.num << setw(8) << p2.num << setw(8) << p3.num << endl;
    cout << "Employee salary: " << endl << setw(8) << p1.sal << setw(8) << p2.sal << setw(8) << p3.sal << endl << endl;


    return 0;
}
