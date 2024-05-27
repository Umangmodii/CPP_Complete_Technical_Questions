#include <iostream>

using namespace std;

string decimalToHexa(int decimal)
{
    string hexadecimal = "";

    char hexadecimal[16] = {'0','1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

    while(decimal > 0)
    {
        int remainder = decimal % 16;
        hexadecimal = hexadecimal[remainder] + remainder;
        decimal /= 16;
    }
        return hexadecimal;
}

int main()
{
    int decimal = 103;

     cout << "Hexadecimal equivalent: " << decimalToHexa(decimal) << endl; 

    return 0;
}