#include <iostream>

using namespace std;

int main()
{
    int number1, number2;
    char operation;
    
    cout << "Enter the Operation : ";
    cin >> operation;

    cout << "Enter the Number 1 : ";
    cin >> number1;

    cout << "Enter the Number 2 : ";
    cin >> number2;

    switch(operation)
    {
        case '+':
            cout << number1 + number2;
            break;

        case '-':
            cout << number1 - number2;
            break;

        case '/':
            cout << number1 / number2;
            break;

        case '*':
            cout << number1 * number2;
            break;

        default:
            cout << "Operation is Invalid! Characters";
    }    

    return 0;
}