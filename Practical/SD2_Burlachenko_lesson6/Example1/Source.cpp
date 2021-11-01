ф#include <iostream>
#include <ctime>
#include <math.h>
#include <cmath>
#include <string>

using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");

    int const ROWS = 5;
    int const COLS = 4;
    int arr[ROWS][COLS];
    int indexResult = 0;
    cout << "========================================================" << endl;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            arr[i][j] = (rand() % 200) - 100;
            cout << arr[i][j] << "\t";
            if (arr[i][j] < 0)
            {
                indexResult += arr[i][j];

            }
        }
        cout << endl;
    }
    cout << "========================================================" << endl;
    cout << "—ума в≥д'Їмних елемент≥в масиву = " << indexResult << endl;
    cout << "========================================================" << endl;
}