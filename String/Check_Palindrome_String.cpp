#include <iostream>
#include <cstring>

using namespace std;

bool palindrome(char* str)
{
    int length = strlen(str);

    for(int i=0; i<length/2; i++)
    {
        str[i] = str[length - i - 1];
    }
}

int main()
{
    char str[] = "MadaM";

    int result = palindrome(str);

    cout << "Is " << str << " Palindrome";

    return 0;
}