#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1, str2;

    cout << "Enter the first string: ";
    getline(cin, str1);

    cout << "Enter the second string: ";
    getline(cin, str2);

    // Concatenate str2 to str1 using the + operator
    str1 += str2;

    cout << "Concatenated string: " << str1 << endl;
    
    return 0;
}
