#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int n = 10;
    const int m = 10;
    srand(time(NULL));
    int a[n][m];
    int c, d;
    cin >> c;
    cout << endl;
    cin >> d;
    cout << endl;

    for (int i = 0; i < c; ++i)
        for (int j = 0; j < d; ++j)
            a[i][j] = rand() % 10;
    for (int i = 0; i < c; ++i)
    {
        for (int j = 0; j < d; ++j)
            cout << a[i][j] << ' ';
            cout << endl;
    }
}