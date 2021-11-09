#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");
    const int N = 15;
    cout << "========================================" << endl;
    char name[N], lastname[N], surname[N];
    cout << "Введите ваше имя: " << endl;
    gets_s(name);
    cout << "Введите вашу фамилию: " << endl;
    gets_s(lastname);
    cout << "Введите як ви будете по батькові: " << endl;
    gets_s(surname);
    cout << "========================================" << endl;
    cout << "Длина имени: " << strlen(name) << " символов" << endl;
    cout << "Длина фамилии: " << strlen(lastname) << " символов" << endl;
    cout << "Длина отчества: " << strlen(surname) << " символов" << endl;
 
    cout << "========================================" << endl;
    for (int i = 0; i < strlen(name); i++)
        cout << name[i] << ",";
    cout << "\n========================================" << endl;
    for (int i = 0; i < strlen(lastname); i++)
        cout << lastname[i] << ",";
    cout << "\n========================================" << endl;
    for (int i = 0; i < strlen(surname); i++)
        cout << surname[i] << ",";
    cout << "\n========================================" << endl;
    if (strlen(name) < strlen(lastname) && strlen(surname) < strlen(lastname))
    {
        cout << "Из вашего ФИО самое длинное это фамилия";
    }
    else if (strlen(lastname) < strlen(name) && strlen(surname) < strlen(name))
    {
        cout << "Из вашего ФИО самое длинное это имя";
    }
    else if (strlen(lastname) < strlen(surname) && strlen(name) < strlen(surname))
    {
        cout << "Из вашего ФИО самое длинное это отчество";
    }
    return 0;
}