#include <iostream>

using namespace std;

int main()
{
    int A = 10;
    int B = 20;

    cout << "A = " << A << " B= " << B;

    A = A + B; // 30 = 10 + 20 
    B = A - B; // 10   = 10 - 20  
    A = A - B; // 10   = 10 - 20

    cout << "A = " << A << " B= " << B;

    return 0;
}