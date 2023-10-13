#include <iostream> 
#include <fstream> 


using namespace std;


void intToBinary(int, int*, int);

void arrayToBinary(int* input_array, int* output_array, int arrsize)
{
    for (int i = 0; i < arrsize; i++)
    {
        intToBinary(input_array[i], output_array, i);
    }
}

void intToBinary(int N, int* array, int arrcount)
{
    int x;
    int start_point = ((arrcount + 1) * 8) - 1;
    for (int i = start_point; N != 0; i--)
    {
        if (i == start_point - 7)
            break;

        x = N % 2;
        N /= 2;

        array[i] = x;
    }
}

void resize_array(int*& array, int oldsize, int newsize)
{
    int iter = 0;
    int* newArray = new int[newsize];

    for (int j = 0; j < oldsize; j++)
    {
        if (j == 0)
            newArray[iter++] = array[j];

        if ((j > 0) && (array[j] != array[j - 1]))
            newArray[iter++] = array[j];
    }
    delete[] array;
    array = newArray;
}


int main()
{
    char dir[69];

    cout << "Enter file name: ";
    cin.getline(dir, 69);

    ifstream fin(dir);

    cout << endl << "Check: ";

    if (!fin)
    {
        cout << "Error: invalid path or file does not exist." << endl;
        return 0;
    }
    else
    {
        cout << "File opened successfully." << endl;
    }

    cout << "Enter number of bytes (1 - 31) -> ";
    int bytecount;
    cin >> bytecount;

    if (cin.fail())
    {
        bytecount = 14;
    }

    bytecount = (bytecount > 31) ? 31 : bytecount;

    int* bytes = new int[bytecount];

    cout << endl << "Byte sequence:" << endl;

    for (int i = 0; i < bytecount; i++)
    {
        fin >> bytes[i];
        cout << bytes[i] << " ";
    }

    int binarycount = bytecount * 8;
    int* binary_array = new int[binarycount];


    for (int i = 0; i < binarycount; i++)
    {
        binary_array[i] = 0;
    }

    arrayToBinary(bytes, binary_array, bytecount);

    cout << endl << "binary sequence:" << endl;

    for (int i = 0; i < binarycount; i++)
    {
        if (i % 8 == 0)
            cout << " ";
        cout << binary_array[i];
    }


    fin.close();
    delete[] binary_array;
    delete[] bytes;

    return 0;
}