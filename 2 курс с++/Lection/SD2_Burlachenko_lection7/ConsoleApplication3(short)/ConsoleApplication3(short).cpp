#include <iostream>
using namespace std;

int main()
{
    int i(0);  //i=0
    char ascii_code(0); //ascii_code =0 - ASCII -код символа

    char s[] = "Hello World";
    cout << s << endl;

    while (s[i])
    {
        ascii_code = s[i];
        if ('a' <= ascii_code && ascii_code <= 'z')
        {
            ascii_code -= 32;
        }
        cout << ascii_code;
        i++;
    }
    cout << endl;

    return 0;
}