#include <iostream>
#include <iomanip>

using namespace std;
int inputX(int a);
int inputY(int b);


int main()
{
	int A[2], B[2], C[2], D[2], x, y, total[6], largestValue;
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");

	cout << "¬ведите координаты четырЄх точек." << endl;
	
	// ¬вод координат 
	A[0] = inputX(1);A[1] = inputY(1);B[0] = inputX(1);B[1] = inputY(1); C[0] = inputX(1); C[1] = inputY(1); D[0] = inputX(1); D[1] = inputY(1);
	int AB = sqrt((A[0] - B[0]) * (A[0] - B[0]) + (A[1] - B[1]) * (A[1]- B[1]));
	int AC= sqrt((A[0] - C[0]) * (A[0] - C[0]) + (A[1] - C[1]) * (A[1] - C[1]));
	int AD = sqrt((A[0] - D[0]) * (A[0] - D[0]) + (A[1] - D[1]) * (A[1] - D[1]));
	int BC = sqrt((B[0] - C[0]) * (B[0] - C[0]) + (B[1] - C[1]) * (B[1] - C[1]));
	int BD = sqrt((B[0] - D[0]) * (B[0] - D[0]) + (B[1] - D[1]) * (B[1] - D[1]));
	int CD = sqrt((C[0] - D[0]) * (C[0] - D[0]) + (C[1] - D[1]) * (C[1] - D[1]));
	cout << "—амый длинный отрезок: " << AD << "\n";
}

int inputX(int a) 
{
	cout << "¬ведите координату X: " << endl;
	cin >> a;
	return a;
}
int inputY(int b)
{
	cout << "¬ведите координату Y: " << endl;
	cin >> b;
	return b;
}
