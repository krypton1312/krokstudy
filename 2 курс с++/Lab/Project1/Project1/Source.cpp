#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int n = 5;
    const int m = 6;
    int a[n][m];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            cout << a[i][j] << ' ';
            cout << endl;
    }
}
