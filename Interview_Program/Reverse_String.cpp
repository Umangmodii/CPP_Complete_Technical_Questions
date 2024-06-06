#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string str = "Umang";
    int length = str.length();
    int temp;

    for(int i = 0; i<length / 2; i++)
    {
       char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    cout << "String Reverse is : " << str;

    return 0;
}