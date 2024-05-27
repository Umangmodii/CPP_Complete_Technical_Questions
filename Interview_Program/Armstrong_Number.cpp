#include <iostream>

using namespace std;

int main()
{
    int n;
    int remainder;
    int sum = 0;

    cout << "Enter the Number : ";
    cin >> n;

    int temp = n;

    while(n > 0)
    {
        remainder = n % 10;
        sum = sum + (remainder * remainder * remainder);
        n = n / 10;
    }

    if(temp == sum)
    {
        cout << "Armstrong Number";
    }

    else
    {
        cout << "Not Armstrong Number";
    }

    return 0;
}