#include <iostream>
using namespace std;

int main()
{
    try
    {
        // Outer try block
        try
        {
            // Inner try block
            int num = 10;

            if (num > 0)
            {
                throw num;  // Throw exception
            }
        }
        catch (int x)
        {
            // Inner catch block
            cout << "Inner catch: Exception caught" << endl;

            throw;  // Rethrow the exception
        }
    }
    catch (int x)
    {
        // Outer catch block handles rethrown exception
        cout << "Outer catch: Exception handled" << endl;
    }

    return 0;
}
