#include <iostream>

using namespace std;

void base(int array[], int n);
void merge_sort(int array[], int start, int end);
void merge(int array[], int start, int mid, int end);

void base(int array[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

void merge_sort(int array[], int start, int end)
{
    if(start < end)
    {
        int mid = start + (end - start) / 2; 
        merge_sort(array, start, mid);
        merge_sort(array, mid + 1, end);
        merge(array, start, mid, end);
    }
}

void merge(int array[], int start, int mid, int end)
{
    int N1 = mid - start + 1;
    int N2 = end - mid;

    int left[N1];
    int right[N2];

    for(int i = 0; i < N1; i++)
    {
        left[i] = array[start + i];
    }

    for(int j = 0; j < N2; j++)
    {
        right[j] = array[mid + 1 + j];
    }

    int i = 0, j = 0, k = start;

    while(i < N1 && j < N2)
    {
        if(left[i] <= right[j])
        {
            array[k] = left[i];
            i++;
        }
        else
        {
            array[k] = right[j];
            j++;
        }
        k++;
    }

    while(i < N1)
    {
        array[k] = left[i];
        i++;
        k++;
    }

    while(j < N2)
    {
        array[k] = right[j];
        j++;
        k++;
    }
}

int main()
{
    int array[] =  { 12, 31, 25, 8, 32, 17, 40, 42 }; 
    int n = sizeof(array) / sizeof(array[0]);

    cout << "Before Sorting: " << endl;
    base(array, n);

    merge_sort(array, 0, n - 1);

    cout << "After Sorting: " << endl;
    base(array, n);

    return 0;
}
