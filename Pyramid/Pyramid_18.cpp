#include <iostream>

using namespace std;

int main()
{
    for(int i=1; i<=6; i++)
    {
        for(int j=1; j<=i; j++) // 1 <= 6 // 
        {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}

// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
// 1 2 3 4 5 6 