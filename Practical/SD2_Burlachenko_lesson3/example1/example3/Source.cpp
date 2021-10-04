#include <iostream>
#include <ctime>
#include <math.h>
#include <cmath>


using namespace std;



int main()
{
    setlocale(LC_ALL, "ru");

    srand(time(NULL));
    int a;
    int r = rand() % 10 + 1;

    cout << "Введіть число: " << endl;
    cin >> a;


    if (r == a)
    {
        cout << "Ви вгадали" << endl;

    }

    if (r != a)
    {
        cout << "Ви не  вгадали" << endl;
        cout << "Це було число " << r << endl;


    }


}