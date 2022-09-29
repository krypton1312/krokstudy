#include <iostream>
#include <iomanip>
#include <ctime>
int main()
{
    long* Ptr;
    srand(time(NULL));
    long arr[100];
    for (int i = 0; i < 100; i++)
    {
        arr[i] = rand() % 50;
        std::cout << arr[i] << std::endl;
    }
    long sum = 0;
    for (Ptr = arr; Ptr < &arr[100]; Ptr++)
    {
        sum += *Ptr;
    }
    std::cout << sum << std::endl;
    return 0;
}
