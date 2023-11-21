#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>;
using namespace std;

class Currency
{
public:
	fstream fs;
	virtual double Exchange(double rubl) = 0;
};

class Dollar : public Currency
{
public:
	virtual double Exchange(double rubl) override
	{
		double dollar = rubl * 0.011;
		cout << rubl << " рублей в долларах составляет: " << dollar << endl;
		return dollar;
	}
};
class Euro : public Currency
{
public:
	virtual double Exchange(double rubl) override
	{
		double euro = rubl * 0.010;
		cout << rubl << " рублей в евро составляет: " << euro << endl;
		return euro;
	}
};
class Grivna : public Currency
{
public:
	virtual double Exchange(double rubl) override
	{
		double grivna = rubl * 0.39;
		cout << rubl << " рублей в гривнах составляет: " << grivna << endl;
		return grivna;
	}
};

class ExchangeService
{
public:
	double ConvertToCurrency(Currency* currency, double rublAmount)
	{
		return currency->Exchange(rublAmount);
	}
};
int main()
{
	setlocale(LC_ALL, "ru");
	fstream fs;
	string path = "MyFile.txt";
	try
	{
		Dollar dollar;
		Euro euro;
		Grivna grivna;

		fs.open(path, fstream::out);
		fs << "58594";
		fs.close();


		fs.open(path, fstream::in | fstream::out | fstream::app);
		string rublAmountstring = "";
		
		fs >> rublAmountstring;
		fs.seekg(0, ios::beg);
		int rublAmount = stoi(rublAmountstring);
		
		
		SetConsoleCP(1251);
		
		
		ExchangeService exchangeService;
		double dollars = exchangeService.ConvertToCurrency(&dollar, rublAmount);
		fs << "\n" << rublAmount << " рублей в долларах составляет: " << dollars << endl;
		
		double euros = exchangeService.ConvertToCurrency(&euro, rublAmount);
		fs << "\n" << rublAmount << " рублей в евро составляет: " << euros << endl;

		double grivnas = exchangeService.ConvertToCurrency(&grivna, rublAmount);
		fs << "\n" << rublAmount << " рублей в гривнах составляет: " << grivnas << endl;


		SetConsoleCP(866);
		fs.close();


		fs.open(path, fstream::in);
		cout << endl << endl;
		string msg = "";
		while (fs >> msg)
		{
			cout << msg << endl;
		}
		fs.close();
	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		cout << "произошла ошибка" << endl;
	}


	return 0;
}