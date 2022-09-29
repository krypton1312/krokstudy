#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    system("chcp 1251 > null");
    cout << "Hello!" << endl;
    const int d = 8;
    int M[d] = {1,0,0,0,1,1,0,1};

    for (int i = 0; i<8; i++)
        cout << M[i] << endl;


    unsigned int x,y,z; //unsigned - от 0 до 255
    x = 3; y = 196;
    z = x + y;

    cout <<x<<" + "<<y<<" = " <<z<< endl;

    return 0;
}
