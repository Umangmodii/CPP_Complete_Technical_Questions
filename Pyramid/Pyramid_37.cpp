#include <iostream>

using namespace std;

int main()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=9; j<=1; j++)
        {
             cout << "  ";
        }

        for(int j=i; j<=2*5-i; j++)
        {
            cout << " *";   
        }

        cout << endl;
    }

    return 0;
}