#include <iostream>

using namespace std;

int main()
{
    string str = "GEEKSFORGEEKS";

    for(int i=1; i<=str[i]; i++)
    {
        if(isupper(str[i]))
        {
           str[i] = tolower(str[i]);
        }  
    }

      cout << "String Lower is : " << str; 

    return 0;
}