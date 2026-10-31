#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    void getData()
    {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    // Overloading * operator
    Complex operator*(int n)
    {
        Complex temp;
        temp.real = real * n;
        temp.imag = imag * n;
        return temp;
    }
};

int main()
{
    Complex c1, c2;
    int n;

    c1.getData();

    cout << "Enter scalar value: ";
    cin >> n;

    c2 = c1 * n;

    cout << "Result: ";
    c2.display();

    return 0;
}
