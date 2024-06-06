#include <iostream>

using namespace std;

int main()
{
    for(int i = 1; i<=6; i++)
    {
        for(int j = 6; j>i - 1; j--)
        {
                cout << " * " << " ";
        }
         cout << endl;
    }

    for(int i = 2; i<=6; i++)
    {
        for(int j = 2-1; j<=i; j++)
        {
                cout << " * " << " ";
        }
         cout << endl;
    }

    return 0;
}

// ******
// *****
// ****
// ***
// **
// *
// **
// ***
// ****
// *****
// ******