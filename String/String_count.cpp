#include <iostream>
#include <cstring>

using namespace std;

int string_count(char *str,char ch)
{
    int length = strlen(str);
    int count = 0;

    for(int i=0; i<length; i++)
    {
        if(str[i] == ch)
        {
            count = count + 1;
        }
    }

    return count;
}

int main()
{
    char str[] = "Hello World";
    char ch = 'l';

    cout << "String count is : " << string_count(str,ch);

    return 0;
}