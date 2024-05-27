#include <iostream>

using namespace std;

int main()
{
    int n;
    int remainder;
    int reverse = 0;

    cout << "Enter the Numbers : ";
    cin >> n;

    int check = n;

    while(n > 0)
    {
        remainder = n % 10;
        reverse = (reverse * 10) + remainder; 
        n = n / 10;
    }

    if(check == reverse)
    {
        cout << "Palindrome Number.";
    }   

    else
    {
         cout << "Not Palindrome.";
    }

    return 0;
}