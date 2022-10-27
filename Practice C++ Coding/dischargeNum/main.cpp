/*
 * Составить программу, которая будет считывать введённое пятизначное число.
 * После чего, каждую цифру этого числа необходимо вывести в новой строке.
 */

#include <QCoreApplication>
#include <iostream>

using namespace std;

bool check (const string& s);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int counter = 1;

    while (counter > 0)
    {
        string num;
        cout << "Enter a five-digit number: ";
        cin >> num;
        cout << endl;

        if (check(num) == false)
        {
            cout << "You entered a non-five-digit number" << endl << endl;
        }

        else
        {
            counter--;

            for (unsigned int i = 0; i < num.size(); i++)
            {
                cout << (i + 1) << " number is " << num[i] << endl;
            }
        }
    }

    return a.exec();
}

bool check (const string& s)
{
    char* p;
    if (s.empty() || s.length() != 5 || strtol(s.c_str(), &p, 10) == 0)
        return false;

    else
        return true;
};
