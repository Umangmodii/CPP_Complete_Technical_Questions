#include <iostream>

using namespace std;

int main()
{
    int count = 1;

    for(int i=1; i<=7; i++)
    {
        for(int j=1; j<= 8 - i; j++)
        {
            cout << "  ";
        }

        for(int j=1; j<=i; j++)
        {
            cout << i << "   ";
        }

        cout << endl;
    }

    return 0;
}