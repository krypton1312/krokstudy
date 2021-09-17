#include <iostream>
 
using namespace std;
 
int main()
{
    int k, temp = 0, pos = 1;
    cin >> k;
    k--;
    while(temp <= k){
        if(k == temp){
            cout << 1 << endl;
            return 0;
        }
        temp += pos;
        pos++;
    }
 
    cout << 0 << endl;
 
    return 0;
}