/*
 * Напишите программу, которая позволяет пользователю ввести в консоли латинскую букву нижнего регистра,
 * переводит её в верхний регистр и результат выводит в консоль.
 */

#include <QCoreApplication>
#include <iostream>

using namespace std;

bool check (char& ch);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int counter = 1;

    while (counter > 0)
    {
        char ch;
        cout << "Enter a lowercase letter: ";
        cin >> ch;
        cout << endl;

        if (check(ch) == false)
            cout << "You did not enter a lowercase letter" << endl << endl;

        else
        {
            cout << "Your letter in uppercase: " << (char)toupper(ch);
            counter--;
        }
    }

    return a.exec();
}

bool check (char& ch)
{
    if (ch == (char)toupper(ch) || isalpha(ch) == 0)
    return false;

    else
        return true;
};
