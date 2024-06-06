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

    for(int i = 1; i<=4; i++)
    {
        for(int j = 1; j<= 9; j++)
        { 
            if(j >= 5 - i && j <= 5 + i)
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
//       * * * 
//     * * * * * 
//   * * * * * * * 
// * * * * * * * * * 