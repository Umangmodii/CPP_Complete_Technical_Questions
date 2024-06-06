#include <iostream>

using namespace std;

int main()
{
    for(int i=1; i<=6; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if((i + j) % 2 == 0) // 1 + 1 % 2 == 0 // 2 % 2 == 0 // Remainder 0 == 0 // then, return 1 
            {
                cout << 1 << " "; 
            }

            else
            {
                cout << 0 << " ";
            }
        }

        cout << endl;
    }

    return 0;
}


// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 
// 0 1 0 1 0 1 