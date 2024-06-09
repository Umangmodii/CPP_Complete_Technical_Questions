#include <iostream>

using namespace std;

int main()
{
    int n = 91;
    int flag = 0;

    for(int i=2; i<n/2; i++)
    {
        if(i % n == 0)
        {
            flag = 1;
            break;
        }
    }

    if(flag = 0)
    {
        cout << "Not a Prime Numbers";
    }

    else
    {
        cout << "Prime Numbers";
    }

    return 0;
}