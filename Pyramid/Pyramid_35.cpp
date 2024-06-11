#include <iostream>

using namespace std;

int main()
{
    for(int i=0; i<7; i++) 
    {
        for(int j=0; j<7; j++)
        {
            if(i == 7 / 2 || j == 7 / 2) // 3.5 // 3.5
            {
                cout << "*";
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