#include <iostream>

using namespace std;

int main()
{
    int n = 6;
    int m = n;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<i; j++) // 5<=5 // 
        {
            cout << " ";
        }

        for(int k=1; k<=m; k++)
        {
            cout << " * ";
        }

        cout << endl;
    }

    return 0;
}