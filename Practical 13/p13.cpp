
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("source.txt");
    ofstream fout("destination.txt");

    char ch;

    if (!fin)
    {
        cout << "Source file not found!";
        return 0;
    }

    while (fin.get(ch))
    {
        fout.put(ch);
    }

    cout << "File copied successfully!";

    fin.close();
    fout.close();

    return 0;
}
