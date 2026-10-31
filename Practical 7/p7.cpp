#include <iostream>
#include <string>
using namespace std;

class String
{
    string str;

public:
    // Function to accept a string
    void getData()
    {
        cout << "Enter a string: ";
        getline(cin, str);
    }

    // Function to display the string
    void display()
    {
        cout << str << endl;
    }
};

int main()
{
    // Create two objects
    String s1, s2;

    // Accept first string
    cout << "Enter first string:" << endl;
    s1.getData();

    // Accept second string
    cout << "Enter second string:" << endl;
    s2.getData();

    // Display both strings
    cout << "\nFirst string: ";
    s1.display();

    cout << "Second string: ";
    s2.display();

    return 0;
}
