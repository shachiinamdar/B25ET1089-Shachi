
#include <iostream>
using namespace std;

namespace First
{
    int num = 20;

    void display()
    {
        cout << "Number = " << num << endl;
    }
}

namespace Second
{
    int num = 10;

    void display()
    {
        cout << "Number = " << num << endl;
    }
}

int main()
{
    First::display();
    Second::display();

    return 0;
}
