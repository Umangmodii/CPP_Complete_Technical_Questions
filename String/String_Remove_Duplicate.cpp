#include <iostream>
#include <cstring>

using namespace std;

int strduplicate(char str[])
{
    int count = 0;
    int length = strlen(str);

    for(int i=0; i<length; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(str[i] == str[j])
            {
                count = count + 1;
                break;
            }
         }
    }

    return count;
}

int main()
{
    char str[] = "HappyNewYear"; //  pea -> Remove String 

    cout<< "String Duplicate Value is : " << strduplicate(str);

    return 0;
}