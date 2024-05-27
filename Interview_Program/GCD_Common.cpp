#include <iostream>

using namespace std;

int main()
{
    int A,B;

    cout << "Enter the Number A : ";
    cin >> A;

    cout << "Enter the Number B : ";
    cin >> B;

    int gcd = 1;

    for(int i=1; i<min(A,B); i++)
    {
        if(A % i == 0 && B % i == 0)
        {
            gcd = i;
        }
    }

    cout << "GCD Is : " << gcd;

    return 0;
}