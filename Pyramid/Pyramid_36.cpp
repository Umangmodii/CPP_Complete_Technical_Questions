#include <iostream>

using namespace std;

int main()
{
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5-i; j++) // 5 - 5 = 0 // 5 - 4 // 1 // 5 - 3 // 2
        {
            cout << "  ";
        }

        for(int j=1; j<=2*i-1; j++)
        {
            cout << "* "; 
        }

        cout << endl;
    }

    return 0;
}

//         *
//       * * *       
//     * * * * *     
//   * * * * * * *   
// * * * * * * * * * 