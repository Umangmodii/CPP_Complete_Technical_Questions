#include <iostream>
#include <queue>

using namespace std;

void Check(queue<int>q2)
{
    queue<int> q3 = q2;

    while(!q3.empty())
    {
        cout << " " << q3.front() << endl; 
        q3.pop();
    }
}

int main()
{
    queue<int>q1;

    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.push(50);

    cout << "Queue Element is : ";

    Check(q1);

    cout << "\n Queue Element Size is : " << q1.size();

    cout << "\n Queue Front Element is : " << q1.front();

    cout << "\n Queue Rear Element is : " << q1.back();
    
    return 0;
}