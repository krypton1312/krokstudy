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

    cout << ("������� ������� ����������� (a): "); cin >> a;
    cout << ("������� ������� ����������� (b): "); cin >> b;
    cout << ("������� ��������� ���� (c): "); cin >> c;

    D = b * b - 4 * a * c;

    if (D < 0) {
        cout << "������������ ������ ����, ������ ����\n\n";
        _getch();
        return 0;
    }
    else if (D == 0) {
        cout << "������������ ����� ����\n\n";
    }
    else if (D > 0) {
        cout << "������������ ������ ����\n\n";
    }

    double y1 = (-b + sqrt(D)) / (2 * a);
    double y2 = (-b - sqrt(D)) / (2 * a);

    cout << "�����:\n";
    sqrt(y1) >= 0 ? cout << sqrt(y1) << "; " << -(sqrt(y1)) << "\n" : cout << "";
    sqrt(y2) >= 0 ? cout << sqrt(y2) << "; " << -(sqrt(y2)) << "\n" : cout << "";

    _getch();
}