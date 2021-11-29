#include <iostream>
#include <ctime>

using namespace std;

int maximum(int* arr, int size)
{
    int max;
    max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}


int main()
{
    srand((unsigned int)time(NULL));
    int size1, size2;
    int* arr1, * arr2;
    setlocale(LC_ALL, "Russian");
    cout << "Введите длину первого массива: ";
    cin >> size1;
    arr1 = new int[size1];
    cout << endl << "Введите длину второго массива: ";
    cin >> size2;
    arr2 = new int[size2];
    cout << "Первый массив: ";
    for (int i = 0; i < size1; i++)
    {
        arr1[i] = rand() % 25;
        cout << arr1[i] << "  ";
    }
    cout << endl << "Максимум - " << (maximum(arr1, size1)) << endl;
    cout << "Второй массив: ";
    for (int i = 0; i < size2; i++)
    {
        arr2[i] = rand() % 25;
        cout << arr2[i] << "  ";
    }
    cout << endl << "Максимум - " << (maximum(arr2, size2)) << endl;
    if ((maximum(arr1, size1) > maximum(arr2, size2)))
    {
        cout << "Наибольший элемент первого массива больше." << endl;
    }
    else
    {
        cout << "Наибольший элемент второго массива больше." << endl;
    }
    cout << "17 ИПЗ-20к-2 Бурлаченко Егор Сергеевич";
    delete[] arr1;
    delete[] arr2;

    system("PAUSE");
    return EXIT_SUCCESS;
}
