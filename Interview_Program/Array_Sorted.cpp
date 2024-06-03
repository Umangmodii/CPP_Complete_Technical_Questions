#include <iostream>

using namespace std;

void base(int array[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << array[i] << " ";
    }
}

void array_sort(int array[], int n)
{
    int temp;

    for(int i=0; i<n; i++)
    {
        for(int j=i+1 ; j<n; j++)
        {
            if(array[j] < array[i]) // array[5] < array[1]; smallest is swap
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;     
            }
        }
    }
}

int main()
{
    int array[5] = {30,10,15,50,45};
    int n = sizeof(array) / sizeof(array[0]);

    cout << "Before Element Unsorted Array is : ";
    base(array,n);

    cout << endl;

    array_sort(array,n);

    cout << "After Element Sorted Array is : ";
    base(array,n);

    return 0;
}