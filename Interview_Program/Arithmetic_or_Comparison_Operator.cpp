#include <iostream>

using namespace std;

int main()
{
    int A = 10;
    int B = 10;

    if(A ^ B)
    {
        cout << "Not-Equal";
    }

    else
    {
        cout << "Equal";
    }

    return 0;
}