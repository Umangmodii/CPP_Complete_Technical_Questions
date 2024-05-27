#include <iostream>

using namespace std;

int main()
{
    int A;
    int B;
    int C;

    cout << "Enter the Number : ";
    cin >> A;

    cout << "Enter the Number : ";
    cin >> B;

    cout << "Enter the Number : ";
    cin >> C;

    if(A>=B && A>=C)
    {
        cout << "Largest Number is  : " << A;
    }

    else if(B>=A && B>=C)
    {
          cout << "Largest Number is  : " << B;             
    }
    
    else
    {
          cout << "Largest Number is  : " << C;
    }   
    
    return 0;
}