#include <iostream>

using namespace std;

int main()
{
    int array1[] = {10,20,30,40,50};
    int sum = 0;

    int n = sizeof(array1) / sizeof(array1[0]); 

    for(int i=0; i<n; i++)
    {
        sum  = sum += array1[i]; 
    }

    cout << "Sum of Array is : " << sum;

    return 0;
}