#include <iostream>

using namespace std;

int main()
{
    string str = "1234";
    int sum = 0;


    for(int i=0; i<str.length(); i++)
    {
       sum += str[i] - '0';
    }

    cout << "Sum is : " << sum;

    return 0;
}