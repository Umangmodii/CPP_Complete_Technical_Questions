#include <iostream>
#include <cstring>

using namespace std;

int revstring(char* str)
{
    int length = strlen(str);

    for(int i=0; i<length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - 1 - i];
        str[length - 1 - i] = temp;
    }
    
}

int main()
{
    char str[] = "Hello";

    cout << "Original String is : " << str << endl;

    revstring(str);

    cout << "Reverse String is : " << str;

    return 0;
}