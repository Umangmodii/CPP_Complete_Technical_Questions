#include <iostream>

using namespace std;

int main()
{
    int m = 2 * 5 - 1;

    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(j == i || j == (m + 1 - i))
            {
                cout << "* ";
            }

            else
            {
                cout << " ";
            }
        }

         cout << endl;
    }

    return 0;
}