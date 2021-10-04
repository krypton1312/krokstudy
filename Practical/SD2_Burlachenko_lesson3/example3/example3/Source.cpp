#include <iostream>
#include <ctime>
#include <math.h>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
    int n;
    int a;
    int total;
    setlocale(LC_ALL, "ru");
  
    srand(time(NULL));
    int r = rand() % 10 + 1;
    int r1 = rand() % 10 + 1;
    int r2 = rand() % 10 + 1;
    int r3 = rand() % 10 + 1;
    int r4 = rand() % 10 + 1;
    int r5 = rand() % 10 + 1;
    int r6 = rand() % 10 + 1;
    int r7 = rand() % 10 + 1;
    int r8 = rand() % 10 + 1;
    int r9 = rand() % 10 + 1;
    int r10 = rand() % 10 + 1;
    int r11 = rand() % 10 + 1;
    int r12 = rand() % 10 + 1;
    int r13 = rand() % 10 + 1;
    int r14 = rand() % 10 + 1;
    cout << r << endl;
    cout << r1 << endl;
    cout << r2 << endl;
    cout << r3 << endl;
    cout << r4 << endl;
    cout << r5 << endl;
    cout << r6 << endl;
    cout << r7 << endl;
    cout << r8 << endl;
    cout << r9 << endl;
    cout << r10 << endl;
    cout << r11 << endl;
    cout << r12 << endl;
    cout << r13 << endl;
    cout << r14 << endl;

    a = r1 + r2 + r3 + r4 + r5 + r6 + r7 + r8 + r9 + r10 + r11 + r12 + r13 + r14;
    total = a / 15;
    cout << "Среднее арифметические: " << total << endl;
    getchar();

}
