#include <iostream>

using namespace std;

int main()
{
    char ch = 'A';

    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=i*2; j++)
        {
            cout << " ";
        }

        for(int j=1; j<=2 * (6 - i) - 1; j++)
        {
            cout << ch << " ";
        }

        cout << endl;
    }

    return 0;
}

// A B C D E F G H I
//   A B C D E F G
//     A B C D E
//       A B C
//         A