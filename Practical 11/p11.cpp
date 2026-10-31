
#include <iostream>
using namespace std;

// Function template
template <class T>
T add(T a, T b)
{
    return a + b;
}

// Class template
template <class T>
class Number
{
    T num;

public:
    void getData()
    {
        cout << "Enter a number: ";
        cin >> num;
    }

    void display()
    {
        cout << "Number = " << num << endl;
    }
};

int main()
{
    // Using function template
    cout << "Sum = " << add(10, 20) << endl;

    // Using class template
    Number<int> n;
    n.getData();
    n.display();

    return 0;
}
