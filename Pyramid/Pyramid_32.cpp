#include <iostream>

using namespace std;

int main()
{
    int a = 65;
    int count = 0;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout <<  char(a) << " ";
            a++;  // Increment to the next character
            count = count + 1;
        }

        cout << endl;
    }
}

// A
// B C
// D E F
// G H I J
// K L M N O