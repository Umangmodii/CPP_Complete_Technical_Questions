#include <iostream>

using namespace std;

int main()
{
    int array[5] = {10,20,30,40,50};
    int n = 5;

    for(int i=0; i< n / 2; i++)
    {
        int temp = array[i];
        array[i] = array[n - i - 1]; // Logic
        array[n - i - 1] = temp;
    }

    cout << "Array Reverse is : ";

    for(int i=0; i<n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}