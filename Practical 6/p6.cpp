#include <iostream>
using namespace std;

class Complex
{
    int real, imag;

public:
    // Function to accept complex number
    void getData()
    {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    // Function to display complex number
    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }

    // Overload * operator
    Complex operator*(int n)
    {
        Complex temp;

        // Multiply real and imaginary parts by scalar
        temp.real = real * n;
        temp.imag = imag * n;

        return temp;
    }
};

int main()
{
    Complex c1, c2;
    int n;

    // Accept complex number
    c1.getData();

    // Accept scalar value
    cout << "Enter scalar value: ";
    cin >> n;

    // Multiply using overloaded operator
    c2 = c1 * n;

    // Display result
    cout << "Result: ";
    c2.display();

    return 0;
}
