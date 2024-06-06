#include <iostream>

using namespace std;

int main()
{
    int number = 65;

    for(int i = 1; i<=5; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            cout << char(number) << " ";
            number++;
        }

        cout << endl;
    }

    return 0;
}




// A 
// B C 
// D E F 
// G H I J 
// K L M N O 