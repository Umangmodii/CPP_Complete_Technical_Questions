#include <iostream>
#include <stack>

using namespace std;

void stacks(stack<int>s2)
{
    stack<int> s3 = s2;

    while(!s3.empty())
    {
        cout << " " << s3.top();
        s3.pop();
    }
    
    cout << "\n";
}

int main()
{
    stack<int> s1;

    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(50);

    cout << "Stack is : " << endl;

    stacks(s1);

    cout << "Size is : " << s1.size() << endl;

    cout << "Top Element is : " << s1.top() << endl;

    s1.pop();

    stacks(s1);
    
    return 0;
}