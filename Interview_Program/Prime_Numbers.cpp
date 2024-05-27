#include <iostream>

using namespace std;

int main()
{
    int n;
    int count = 0;

    cout << "Enter the Number : ";
    cin >> n;

    for(int i=1; i<=n; i++)
    {
        if(n % i == 0)
        {
            count++;   
        }
    }

    if(count == 2)
    {
        cout << "The Number is Prime Number";
    }

    else
    {
        cout << "Not Prime Number";
    }

    return 0;
}