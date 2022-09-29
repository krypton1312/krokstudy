#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main() {

    int* arr;
    int n, i, neg;
    int a = -78, b = 109;

    cout << "Please input an array's size n=" << endl;
    cin >> n;

    srand((unsigned)time(NULL));
    arr = new int[n];

    for (i = 0; i < n; i++)
    {
        arr[i] = a + rand() % (b - a + 1);
        cout << setw(4) << arr[i];
    }

    bool prap = false;
    i = 0;

    while (i < n && !prap)
    {
        if (arr[i] < 0)
        {
            prap = true;
        }
        i++;
    }

    if (prap) {

        neg = arr[i - 1];
        for (i = 0; i < n; i++) {
            if (neg < arr[i] && arr[i] < 0)
            {
                neg = arr[i];
            }
        }
        cout << "\nBiggest negative element = " << neg << endl;
    }
    else {
        cout << "\nNegative elements not founded";
    }

    delete[] arr;
    return 0;
}