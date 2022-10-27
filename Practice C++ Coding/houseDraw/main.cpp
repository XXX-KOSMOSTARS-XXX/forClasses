/*
 * Программно нарисовать домик в С++. Используйте управляющие символы новой строки и табуляции.
 */

#include <QCoreApplication>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    cout << "\t\t      /\\   " <<endl;
    cout << "\t\t     /  \\   " <<endl;
    cout << "\t\t    /    \\   " <<endl;
    cout << "\t\t   /______\\   " <<endl;
    cout << "\t\t   |    _ |  " <<endl;
    cout << "\t\t** |   |_|| ****" <<endl;
    cout << "\t\t** |      | ****" <<endl;
    cout << "\t\t|| |______| ||||" <<endl;

    return a.exec();
}
