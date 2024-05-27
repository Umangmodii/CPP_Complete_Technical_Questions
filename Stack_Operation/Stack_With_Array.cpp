#include <iostream>

using namespace std;

int size = 100;
int top = -1;
int stack[100];

void Push(int value)
{
    if(top >= size - 1)
    {
        cout << "Stack is Overflow" << endl;
    }

    else
    {   
        top++;
        stack[top] = value; 
    }
}

void Pop(int value)
{
    if(top <= -1)
    {
        cout << "Stack is Underflow";
    }

    else
    {
        cout << "The Pop Element is : " << stack[top] << endl; 
        top--;
    }
}

void Display(int value)
{
    if(top >= 0)
    {
        cout << "Stack Elements are : ";

        for(int i=top; i>=0; i--)
        {
            cout << stack[i] << " ";
            cout << endl;
        }
    }

    else
    {
        cout << "Stack is Empty";
    }
}

int main()
{
    int choice;
    int value;

    cout << "1. Push Operation" << endl;
    cout << "2. Pop Operation" << endl;
    cout << "3. Display Operation" << endl;
    cout << "4. Exit Operation" << endl;

    do
    {
        cout << "Enter your Choice ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter the Number in Push ";
                cin >> value;
                Push(value);
                break;

            case 2:
                Pop(value);
                break;

            case 3:
              Display(value);
              break;

            case 4:
                break;
        }
    }

    while(choice!=4);

    return 0;
} 