#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    int i;
    int n;
    int a;

    double S;
    setlocale(0, "ukr");
    S = 0;

    cout << "������ �� ����� ����� ��������, n=";
    cin >> n;
    for (i = 3; i < n; i+=1)
    {
        S += i;

        cout << setw(4) << i << setw(6) << S << endl;
    }
    cout << "���� S=" << S << endl;
    char c = getchar();
    return 0;
}
