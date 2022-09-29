#include <iostream>
#include <math.h>
#define NOMINMAX
#include <Windows.h>
#include <conio.h>

using namespace std;
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a, b, c, D;

    cout << ("Введите старший коэффициент (a): "); cin >> a;
    cout << ("Введите средний коэффициент (b): "); cin >> b;
    cout << ("Введите свободный член (c): "); cin >> c;

    D = b * b - 4 * a * c;

    if (D < 0) {
        cout << "Дискриминант меньше нуля, корней нету\n\n";
        _getch();
        return 0;
    }
    else if (D == 0) {
        cout << "Дискриминант равен нулю\n\n";
    }
    else if (D > 0) {
        cout << "Дискриминант больше нуля\n\n";
    }

    double y1 = (-b + sqrt(D)) / (2 * a);
    double y2 = (-b - sqrt(D)) / (2 * a);

    cout << "Ответ:\n";
    sqrt(y1) >= 0 ? cout << sqrt(y1) << "; " << -(sqrt(y1)) << "\n" : cout << "";
    sqrt(y2) >= 0 ? cout << sqrt(y2) << "; " << -(sqrt(y2)) << "\n" : cout << "";

    _getch();
}