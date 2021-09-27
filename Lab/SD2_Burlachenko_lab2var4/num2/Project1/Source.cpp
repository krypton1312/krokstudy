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

    cout << "введ≥ть к≥льк≥сть чисел, n=";
    cin >> n;
    cout << "¬вед≥ть a= ";
    cin >> a;
    for (i = 1; i < n; i++)
    {
        S = S + exp(-i+a)/i;

        cout << setw(4) << i << setw(6) << S << endl;
    }
    cout << "сума S=" << S << endl;
    char c = getchar();
    return 0;
}