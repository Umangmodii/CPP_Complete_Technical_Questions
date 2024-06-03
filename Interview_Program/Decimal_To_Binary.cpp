#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    int decimal = 5;

    bitset<32> binary(decimal);

    cout << "Binary is : " << binary;

    return 0;
}