#include <iostream>
#include <iomanip>
#include <math.h>
#include <conio.h>
using namespace std;
int main()
{
    double x, y, h, a, b;
    cout << "Input a " << endl;
    cin >> a;
    cout << "Input b " << endl;
    cin >> b;
    cout << "Input h " << endl;
    cin >> h;
    x = a;

 

    while (x <= b)
    {
        if (x == 3 || x == 7)
        {

            y = sqrt(cos(x) + log(x));
        }

        else {
            if (x > 0)
            {
                y = x + tan(x);
            }
        else {
                y = x + 1;
        }
    }
        x = x + h;
    }
    cout << setw(10) << " x" << setw(12) << setprecision(6) << "y" << endl << endl;
    cout << setw(10) << x << setw(12) << setprecision(6) << y << endl << endl;
    _getch();
    return 0;
}