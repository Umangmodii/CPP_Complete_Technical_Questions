#include <iostream>

using namespace std;

void base(int array[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout << array[i] << " ";
    }
}

int quick_sort(int array[],int start,int end)
{
    if(start < end)
    {
        int p = partition(array,start,end);
        quick_sort(array,start,p-1);
        quick_sort(array,p+1,end);
    }
}

int partition(int array[],int start,int end)
{
    int pivot = array[end];
    int i = 0;

    for(int j=0; j<=end - 1; j++)
    {
        if(array[j] < pivot)
        {
            i++;

            int temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    }

    int temp = array[i+1];
    array[i+1] = array[end];
    array[i+1] = end;

    return (i+1);
}

int main()
{
    int array[] = {50,40,20,25,10,70};

    int n = sizeof(array) / sizeof(array[0]);

    cout << "Before Sorting array elements are - " << endl;

    base(array,n);

    cout << endl;

    quick_sort(array,0,n-1);

    cout << "After Sorting array elements are - " << endl;

    base(array,n);

    return 0;
}