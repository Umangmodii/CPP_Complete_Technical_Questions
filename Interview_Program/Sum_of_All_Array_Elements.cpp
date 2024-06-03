#include <iostream>

using namespace std;

int main()
{
    int array[] = {10,20,30,40,50};
    int n = sizeof(array) / sizeof(array[0]);
    int sum = 0;

    for(int i=0; i<n; i++)
    {
        sum = array[i] += sum;
    }

    cout << "Sum of Array is : " << sum;

    return 0;
}