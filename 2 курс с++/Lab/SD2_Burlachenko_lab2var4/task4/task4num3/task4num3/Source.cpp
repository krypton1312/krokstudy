#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const double eps = 0.0001;
    double a1 = 0;
    double b1 = 0;
    double c1 = 0;
    double a2 = 0;
    double b2 = 0;
    double c2 = 0;

    cout << "Enter parameters of the first equation:\n";
    cin >> a1 >> b1 >> c1;
    cout << "Enter parameters of the second equation:\n";
    cin >> a2 >> b2 >> c2;

    if (fabs(a1 * b2 - a2 * b1) >= eps)
    {
        cout << "x = " << (b1 * c2 - b2 * c1) / (a1 * b2 - a2 * b1) << '\n';
        cout << "y = " << (c1 * a2 - c2 * a1) / (a1 * b2 - a2 * b1) << '\n';
    }
    system("pause");
    return 0;
}