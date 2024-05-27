#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter the Number : ";
    cin >> n;

    if(n % 400 == 0)
    {
        cout << "Leap Year";
    }

    else if(n % 100 == 0)
    {
        cout << "Not Leap Year";
    }

    else
    {
        cout << "Leap Year";
    }

    return 0;
}