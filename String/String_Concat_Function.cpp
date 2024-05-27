#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    char str1[20];
    char str2[20];

    cout << "Enter the String 1 : ";
    cin.getline(str1,25);

    cout << endl;

    cout << "Enter the String 2 : ";
    cin.getline(str2,25);

    strcat(str1,str2);

    cout << "String1 is : " << str1 << endl;    
    cout << "String2 is : " << str2 << endl;


    return 0;
}