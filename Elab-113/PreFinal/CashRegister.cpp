#include <iostream>
using namespace std;

class Taxable {
public:
    virtual float getTax(float price) = 0;
};

class ThailandTax : public Taxable {
public:
    float getTax(float price) { 
        return price * 0.07;
    }
};

class USATax : public Taxable{
public:
    float getTax(float price) {
        return price * 0.10;
    }
};


class CashRegister {
private:
    float total;
    Taxable *tax;
public:
    CashRegister(Taxable *tax) {
        this->tax = tax;
    }
    void addIem(float price) {
        total += price;
    }

    float getTotalPrince() {
        return total;
    }

    float getNetPrice() {
        return total + tax->getTax(total);
    }
};

int main() {
    CashRegister *cashRegister = new CashRegister(new USATax());
    cashRegister->addIem(1000);
    cout << cashRegister->getTotalPrince() << endl;
    cout << cashRegister->getNetPrice() << endl;
}