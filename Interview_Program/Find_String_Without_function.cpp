#include <iostream>

using namespace std;

int main()
{
    char str[100];
    int length = 0;

    cout << "Enter the String : ";
    cin >> str;

    cout << endl;

    for(int i=0; str[i] != '0'; i++)
    {
        length++;
    }

     cout << "String Length is : " <<  length << "";

    return 0;
}