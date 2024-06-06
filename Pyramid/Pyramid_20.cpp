#include <iostream>

using namespace std;

int main()
{
    int count = 1;

     for(int i=0; i<=5; i++) // 1 to 6
    {
        for(int j=0; j<=i; j++) // start 0 + 1  // then, 1 + 1 = 2
        {
            cout << count << " ";
            count = count + 1;
        }

        cout << endl;
    }
}


// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 
// 16 17 18 19 20 21 