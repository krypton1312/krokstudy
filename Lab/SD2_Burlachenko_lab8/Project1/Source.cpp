#include <iostream>

using namespace std;

double fun(double x)
{
    double s;
    s = (3 * x + 3) / (x - 5);
    return s;
}

int main()
{
    double x; //��������
    double y; //��������

    cout << " x1=";
    cin >> x;
    y = fun(x);
    cout << "\n y1=" << y << endl;

    cout << "\n x2=";
    cin >> x;
    y = fun(x);
    cout << "\n y2=" << y << endl;

    getchar();
}
