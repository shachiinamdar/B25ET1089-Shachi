#include <iostream>
using namespace std;

// Base class
class FoodItem
{
public:
    // Virtual function
    virtual void calculateBill()
    {
        cout << "Calculating food bill" << endl;
    }
};

// Derived class Pizza
class Pizza : public FoodItem
{
    int price, quantity;

public:
    // Function to calculate pizza bill
    void calculateBill()
    {
        cout << "Enter pizza price and quantity: ";
        cin >> price >> quantity;

        cout << "Pizza Bill: " << price * quantity << endl;
    }
};

// Derived class Burger
class Burger : public FoodItem
{
    int price, quantity;

public:
    // Function to calculate burger bill
    void calculateBill()
    {
        cout << "Enter burger price and quantity: ";
        cin >> price >> quantity;

        cout << "Burger Bill: " << price * quantity << endl;
    }
};

int main()
{
    Pizza p;
    Burger b;

    // Base class pointer
    FoodItem *f;

    // Calling Pizza function
    f = &p;
    f->calculateBill();

    // Calling Burger function
    f = &b;
    f->calculateBill();

    return 0;
}
