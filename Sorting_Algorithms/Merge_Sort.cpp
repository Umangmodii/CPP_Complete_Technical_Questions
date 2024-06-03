#include <iostream>

using namespace std;

void base(int array[], int n)
{
    for(int i=0; i<=n; i++)
    {
        cout << array[i] << " ";
    }
}

void merge_sort(int array[],int start, int end)
{
    if(start < end)
    {
        int mid = (start + end) / 2;

        merge_sort(array,start,end);
        merge_sort(array,mid+1,end);
        merge(array,start,mid,end);
    }
}

void merge(int array[],int start, int mid, int end)
{
    int i,j,k;

    int n1 = mid - start + 1;
    int n2 = end - mid;

    int LeftArray[n1], RightArray[n2];

    // Copy of Data
    for(int i=0; i<n1; i++)
    {
        LeftArray[i] = array[start + 1];   
    }

    for(int j=0; j<n2; j++)
    {
        RightArray[j] = array[mid - 1 + j];
    }

    i = 0;
    j = 0;
    k = start;

    while(i < n2 && j < n2)
    {
        if(LeftArray[i] <= RightArray[j])
        {
            array[k] = LeftArray[i];
            i++;
        }

        else
        {
            array[k] = RightArray[j];
            j++;
        }

        while(i < n1)
        {
            array[k] = LeftArray[i];
            i++;
            j++;
        }

        while(j < n2)
        {
            array[k] = RightArray[j];
            j++;
            
        }
    }
}

int main()
{
    int array[] = {20,5,10,25,35,15};
    int n = sizeof(array) / sizeof(array[0]);

    cout << "Before sorting array is : ";
    base(array,n);
    merge_sort(array,0,n-1);

    cout << "After sorting array is : ";

    base(array,n);

    return 0;
}