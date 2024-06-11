#include <iostream>

using namespace std;

int main()
{
    int number = 65;

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout << char(number + j) << " ";
        }


        cout << endl;
    }

    return 0;
}

// A
// AB
// ABC
// ABCD