#include <iostream>

using namespace std;

void base(int array[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << array[i] << " ";
    }
}

int partition(int array[],int start,int end)
{
    int pivot = array[end];
    int i = (start - 1);
    
    for(int j = start; j<=end-1; j++)
    {
        if(array[j] < pivot) // when less than to Left Side
        {
            i++; // Small to Increment

            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }
            int temp = array[i+1];
            array[i+1] = array[end];
            array[end] = temp;

    return (i+1);
}

void quick_sort(int array[],int start,int end)
{
    if(start < end)
    {
        int p = partition(array,start,end); 
        quick_sort(array,start,p-1);
        quick_sort(array,p+1,end);
    }
}

int main()
{
    int array[] = { 23, 8, 28, 13, 18, 26 };  
    int n = sizeof(array) / sizeof(array[0]);

    cout << "Before Sorting" << endl;
    base(array,n);
    quick_sort(array,0,n-1);

    cout << endl;

    cout << "After Sorting" << endl;
    base(array,n);

    return 0;
}