#include <iostream>
using namespace std;

class Currency
{
public:
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
	try
	{
		Dollar dollar;
		Euro euro;
		Grivna grivna;


		double rublAmount = 3893;

		ExchangeService exchangeService;
		double dollars = exchangeService.ConvertToCurrency(&dollar, rublAmount);
		double euros = exchangeService.ConvertToCurrency(&euro, rublAmount);
		double grivnas = exchangeService.ConvertToCurrency(&grivna, rublAmount);
	}
	catch (const std::exception& ex)
	{
		cout << ex.what() << endl;
		cout << "произошла ошибка" << endl;
	}


	return 0;
}