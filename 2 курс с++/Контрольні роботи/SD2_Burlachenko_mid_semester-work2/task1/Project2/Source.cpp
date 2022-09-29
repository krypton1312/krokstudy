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
    cout << "������� ����� ������� �������: ";
    cin >> size1;
    arr1 = new int[size1];
    cout << endl << "������� ����� ������� �������: ";
    cin >> size2;
    arr2 = new int[size2];
    cout << "������ ������: ";
    for (int i = 0; i < size1; i++)
    {
        arr1[i] = rand() % 25;
        cout << arr1[i] << "  ";
    }
    cout << endl << "�������� - " << (maximum(arr1, size1)) << endl;
    cout << "������ ������: ";
    for (int i = 0; i < size2; i++)
    {
        arr2[i] = rand() % 25;
        cout << arr2[i] << "  ";
    }
    cout << endl << "�������� - " << (maximum(arr2, size2)) << endl;
    if ((maximum(arr1, size1) > maximum(arr2, size2)))
    {
        cout << "���������� ������� ������� ������� ������." << endl;
    }
    else
    {
        cout << "���������� ������� ������� ������� ������." << endl;
    }
    cout << "17 ���-20�-2 ���������� ���� ���������";
    delete[] arr1;
    delete[] arr2;

    system("PAUSE");
    return EXIT_SUCCESS;
}
