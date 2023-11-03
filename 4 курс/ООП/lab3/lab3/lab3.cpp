#include <iostream>
#include <string>

using namespace std;
class Money {
public:
    int grivnas;
    int kopiykas;
    Money(int grivnas = 0, int kopiykas = 0) : grivnas(grivnas), kopiykas(kopiykas) {}

    void add(const Money& other) {
        grivnas += other.grivnas;
        kopiykas += other.kopiykas;
        normalize();
    }

    void subtract(const Money& other) {
        grivnas -= other.grivnas;
        kopiykas -= other.kopiykas;
        normalize();
    }

    void divide(double value) {
        int totalKopiykas = grivnas * 100 + kopiykas;
        int resultKopiykas = static_cast<int>(totalKopiykas / value);
        grivnas = resultKopiykas / 100;
        kopiykas = resultKopiykas % 100;
    }

    void multiply(double value) {
        int totalKopiykas = grivnas * 100 + kopiykas;
        int resultKopiykas = static_cast<int>(totalKopiykas * value);
        grivnas = resultKopiykas / 100;
        kopiykas = resultKopiykas % 100;
    }

    bool operator==(const Money& other) const {
        return grivnas == other.grivnas && kopiykas == other.kopiykas;
    }

    bool operator<(const Money& other) const {
        if (grivnas == other.grivnas) {
            return kopiykas < other.kopiykas;
        }
        return grivnas < other.grivnas;
    }

    void normalize() {
        int totalKopiykas = grivnas * 100 + kopiykas;
        grivnas = totalKopiykas / 100;
        kopiykas = totalKopiykas % 100;
    }
};

class Goods {
private:
    Money price;
    int quantity;
    int invoiceNumber;

public:
    string name;
    string date;
    Goods(const  string& name, const  string& date, int priceGrivnas, int priceKopiykas, int quantity, int invoiceNumber)
        : name(name), date(date), price(priceGrivnas, priceKopiykas), quantity(quantity), invoiceNumber(invoiceNumber) {}

    void changePrice(int newPriceGrivnas, int newPriceKopiykas) {
        price = Money(newPriceGrivnas, newPriceKopiykas);
    }

    void changeQuantity(int newQuantity) {
        quantity = newQuantity;
    }

    Money calculateTotalCost() const {
        Money totalCost = price;
        totalCost.multiply(quantity);
        return totalCost;
    }
};

int main() {
    Goods item("Product 1", "2023-10-27", 10, 50, 3, 123); 

    item.changePrice(5, 25); 
    item.changeQuantity(5);  

    Money totalCost = item.calculateTotalCost(); 
    std::cout << "Total cost of " << item.name << " is: " << totalCost.grivnas << " grivnas " << totalCost.kopiykas << " kopiykas" << std::endl;

    return 0;
}
