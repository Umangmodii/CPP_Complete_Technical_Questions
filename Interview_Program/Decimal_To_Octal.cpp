#include <iostream>

using namespace std;

int main()
{
    int decimal = 55;
    int octal = 0;
    int place = 1;

    int temp = decimal;

    while(temp)
    {
        int lastdigit = temp % 8;
        temp /= 8;
        octal += lastdigit * place;
        place *= 10;
    }

    cout << "Octal Value is : " << octal;

    return 0;
}