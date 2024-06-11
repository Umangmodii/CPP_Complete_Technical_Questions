#include <iostream>
#include <string>

using namespace std;

void splitstr(const string& str)
{
    int length = str.length();
    int start = 0;

    for(int i=1; i<=length; i++)
    {
        if(i == length || str[i] == ' ')
        {   
            for(int j = start; j<i; j++)
            {
                cout << str[j];
            }

            cout << endl;
            start = i + 1;   
        }
    }
}

int main()
{
    string str = "Hello World";

    cout << "String Splitting: " << endl;
    splitstr(str);

    return 0;
}