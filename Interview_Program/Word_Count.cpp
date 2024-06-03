#include <iostream>

using namespace std;

int main()
{
    string str;
    int count = 0;

    cout << "Enter the String : ";
    getline(cin,str);

    for(int i=0; i<str.length(); i++)
{
    if(str[i])
    {
        count = count + 1;
    }
}

    cout << "String Word Count is : " << count;

    return 0;
}