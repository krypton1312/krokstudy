#include <iostream>
#include <iomanip>
int main()
{
    int x = 10, y = 15;

    int* xPtr;
    int* yPtr;

    xPtr = &x;
    yPtr = &y;



    std::cout << std::setw(12) << xPtr << ' ' << std::setw(12) << yPtr << std::endl;
    std::cout << std::setw(12) << (int)xPtr << ' ' << std::setw(12) << (int)yPtr << std::endl;

    xPtr = yPtr;

    std::cout << std::endl << std::setw(12) << xPtr << ' ' << std::setw(12) << yPtr << std::endl;
    std::cout << std::setw(12) << (int)xPtr << ' ' << std::setw(12) << (int)yPtr << std::endl;


    if (xPtr == yPtr)
    {
        std::cout << "The pointer's values are equal!\n";
        std::cout << *xPtr << ' ' << *yPtr << std::endl;

    }
    else
    {
        std::cout << "The pointer's values are not equal!\n";
        std::cout << *xPtr << ' ' << *yPtr << std::endl;
    }

    return 0;
}
