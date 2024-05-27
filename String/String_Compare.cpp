#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string str1 = "Hello";
    string str2 = "Welcome";

    if(str1 > str2)
    {
        cout << "String1 is grether than string2" << endl;
    }

    else
    {
        cout << "String2 is not grether than string2" << endl;
    }

    if(strcmp(str1.c_str(),str2.c_str()) > 0)
    {
          cout << "Using strcmp: str1 is greater than str2" << endl << endl;
    }

    else
    {
          cout << "Using strcmp: str1 is not greater than str2" << endl << endl;
    }

    return 0;
}