#include<iostream> 

using namespace std;


void SetBit(int& a, int n) {
    a |= 1 << n;
}
void ResetBit(int& a, int n) {
    a &= ~(1 << n);
}
bool GetBit(int a, int n) {
    return !!(a & (1 << n));
}
void SetRsetBit(int& a, int n, bool v) {
    if (v)
        SetBit(a, n);
    else
        ResetBit(a, n);
}
char* ToOctet(int a) {
    static char result[16] = { 0 };
    for (int i = 0; i < 8; ++i)
        result[i] = a & (128 >> i) ? '1' : '0';
    return result;
}

int main(int argc, char* argv[]) {
    int b = 100;
    int bn = 0;
    cout << "Enter a number between 0 and 255: " << endl;
    cin >> b;
    b %= 256;
    cout << "d(10)=s(2)\r\n" << b << ToOctet(b) << endl;
    cout << "Enter bit #: " << endl;
    cin >> bn;
    bn %= 8;

    int Shifted = b >> 2;
    SetRsetBit(Shifted, 7, GetBit(b, 7));
    SetRsetBit(Shifted, bn, GetBit(b, bn));
    printf("%d(10)=%s(2)", Shifted, ToOctet(Shifted));
    int r = b + Shifted;
    printf("%d(10)=%s(2)", r, ToOctet(r));
    return 0;
}