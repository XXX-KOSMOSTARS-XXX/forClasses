/*
 * Напишите программу, запрашивающую имя, фамилия, отчество и номер группы студента
 * и выводящую введённые данные в следующем виде:
 * ********************************
   * Лабораторная работа № 1      *
   * Выполнил(а): ст. гр. ЗИ-123  *
   * Иванов Андрей Петрович       *
   ******************************** *
 * Необходимо, чтобы программа сама определяла нужную длину рамки. Сама же длина
 * рамки зависит от длины наибольшей строки внутри рамки. Используя циклы for легко можно выровнять стороны рамки.
 */

#include <QCoreApplication>
#include <iostream>

using namespace std;

struct Student
{
    string name,
           surname,
           group;
};

void frame (Student stud);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Student stud;

    cout << "Enter student name: ";
    cin >> stud.name;
    cout << endl << "Enter student surname: ";
    cin >> stud.surname;
    cout << endl << "Enter student group: ";
    cin >> stud.group;
    cout << endl;

    frame(stud);

    return a.exec();
}

void frame (Student stud)
{
    string lab = "Lab #1",
           name = stud.name + ' ' + stud.surname + ' ' + stud.group;
    unsigned int counter = (lab.length() > name.length()) ? lab.length() : name.length();

    for (unsigned int i = 0; i < (counter + 6); i++)
    {
        cout << "*";
    }

    cout << endl << "* " << lab;

    for (unsigned int i = 0; i < (counter + 3 - lab.length()); i++)
    {
        cout << " ";
    }

    cout << "*";

    cout << endl << "* " << name;

    for (unsigned int i = 0; i < (counter + 3 - name.length()); i++)
    {
        cout << " ";
    }

    cout << "*" << endl;

    for (unsigned int i = 0; i < (counter + 6); i++)
    {
        cout << "*";
    }

};
