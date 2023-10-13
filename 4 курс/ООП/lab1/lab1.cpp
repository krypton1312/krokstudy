#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	class MyClass
	{
	public:
		int a, b, c, alpha, beta, gamma, S, P, p, h;
		string type;
		bool IsTriangle = true;

		void AskData()
		{
			cout << "Write lenght of side a, b, c:" << endl; cin >> a; cin >> b; cin >> c;
			cout << "Now tell me corners alpha, beta, gamma:" << endl; cin >> alpha; cin >> beta; cin >> gamma;
		}
		void Calculation()
		{
			if (alpha + beta + gamma == 180)
			{
				P = a + b + c;
				p = P / 2;
				S = sqrt(p * (p - a) * (p - b) * (p * c));
				h = (2 * P) / a;

				if (alpha || beta || gamma == 90)
				{
					type = "Triangle is rectangular.";
				}
				else if (alpha || beta || gamma > 90)
				{
					type = "Triangle is obtuse-angled.";
				}
				else if (alpha && beta && gamma < 90)
				{
					type = "Triangle is acute-angled.";
				}

			}
			else
			{
				IsTriangle = false;
			}


		}
		void DisplayData()
		{
			if (IsTriangle)
			{
				cout << "Sides(a,b,c): " << a << ", " << b << " ," << c;
				cout << "\nCorners(alpha,beta,gamma): " << alpha << ", " << beta << " ," << gamma;
				cout << "\nP= " << P; cout << "\nS= " << S; cout << "\nh= " << h; cout << "\nType= " << type;
			}
			else
			{
				cout << "It is not a triangle.";
			}
		}

	};
	MyClass triangle;
	string again;
	triangle.AskData();
	triangle.Calculation();
	triangle.DisplayData();


	cout << "\n\nWould you like to change data(yes/no)?\n"; cin >> again;


	if (again == "yes")
	{
		triangle.AskData();
		triangle.Calculation();
		triangle.DisplayData();
	}
	else
	{
		return 0;
	}


}
