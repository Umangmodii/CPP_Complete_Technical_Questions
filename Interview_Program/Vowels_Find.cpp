#include <iostream>

using namespace std;

int main()
{
    char str;

    cout << "Enter the String : ";
    cin >> str;

    if(str == 'A' || str == 'E' || str == 'I' ||  str == 'O' || str == 'U' || str == 'a' || str == 'e' || str == 'i' || str == 'o' || str == 'u')
    {
        cout << str << " Is vowels." << endl;
    }

    else
    {
        cout << str << " Consonant." << endl;
    }

    return 0;
}