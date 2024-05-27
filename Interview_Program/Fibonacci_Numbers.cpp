#include <iostream>

using namespace std;

int main()
{
    int N1 = 0;
    int N2 = 1;
    int N3;

    int n;

    cout << "Enter the Number : ";
    cin >> n;

    for(int i = 2; i <= n; i++)
    {
        N3 = N1 + N2;
        N1 = N2;
        N2 = N3;
    }

    cout << "Fibonacci Number is : " << N3;

    return 0;
}