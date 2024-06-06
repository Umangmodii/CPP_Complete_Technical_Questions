#include <iostream>

using namespace std;

int main()
{
    int k = 6;

    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            if(j >= k - i ) // 5 >= 5 //  j True 
            {
                cout << "* "; // True Condition
            }

            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}

//     * 
//    * * 
//   * * * 
//  * * * * 
// * * * * * 