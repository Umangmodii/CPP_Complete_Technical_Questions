#include <iostream>

using namespace std;

int fibonacci_Number(int n)
{
    int N1 = 0;
    int N2 = 1;
    int N3;

    for(int i=2; i<=n; i++)
    {
        N3 = N1 + N2;
        N1 = N2;
        N2 = N3;
    }

    return N3;
}

int main()
{
    int n;

    cout << "Enter the Number : ";
    cin >> n;

    int result = fibonacci_Number(n);

    cout << "Fibonacci Number is : " << result;

    return 0;
}