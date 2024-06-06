#include <iostream>

using namespace std;

int main()
{
    for(int i = 1; i<=5; i++)
    {
        for(int j = 9; j>=1; j--)
        {
            if(j >= i && j <= 10 - i) // 9 >= 1 && 9 <= 10 - 1 //  
            {
                cout << "* ";
            }

            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}

// * * * * * * * * * 
//   * * * * * * * 
//     * * * * * 
//       * * * 
//         * 