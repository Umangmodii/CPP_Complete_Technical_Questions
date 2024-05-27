#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string str = "Hello";

    reverse(str.begin(), str.end());

    cout << "String is : " << str << "";

    return 0;
}