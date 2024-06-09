#include <iostream>

using namespace std;

int powers(int base, int exponent)
{
    if(exponent == 0)
    {
        return 1;
    }
    
    return base * (powers(base,exponent - 1));  // base * exponent
}

int main()
{
    int base = 4;
    int exponent = 5;

    int result = powers(base,exponent);

    cout << "Result is : " << result;

    return 0;
}