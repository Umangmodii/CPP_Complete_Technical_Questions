#include <iostream>

using namespace std;

int arraysort(int array[], int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }

    //when an array is not in sorted order

    if(array[n - 1] < array[n - 2]) // [5 - 1] < [ 5 - 2] // [4] < [3]
    {
        return 0;
    }

    return arraysort(array,n-1);
}

int main()
{
    int array[] = {1,2,3,4};
    int n = sizeof(array) / sizeof(array[0]);

    if(arraysort(array,n))
    {
        cout << "Array Element is Sorted!";
    }

    else
    {
        cout << "Array Element is Not Sorted!";
    }

    return 0;
}