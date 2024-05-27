#include <iostream>

using namespace std;

// n = 7;
// 7 + 6 + 5 + 4 + 3 + 2 + 1 = 0
// 28

int main()
{
    int number = 7;
    int sum = 0;

    for(int i=1; i<=number; i++) // Total Numbers
    {
      sum = sum += i; // 0 + 1 = 1 // 0 + 2 = 2 // 0 + 3 = 3 // 0 + 4  = 4 // 0 + 5 = 5 // 0 + 6 = 6 // 0 + 7 = 7 // Final is = 28
    }

    cout << "The Natural Number is : " << sum;

    return 0;
}