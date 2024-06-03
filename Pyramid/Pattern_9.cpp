#include <iostream>

using namespace std;

int main()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<7-i; j++) //  7 - 5 = 2
        {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}