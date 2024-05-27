#include <iostream>

using namespace std;

int main()
{
    char c;

    cout << "Enter the Character";
    cin >> c;

    if(c >= 'A' || c <= 'Z' || c >= 'a' || c <= 'z')
    {
        cout << c << " is Characters";
    }

    else
    {
        cout << c << " is Not characters";
    }

    return 0;
}