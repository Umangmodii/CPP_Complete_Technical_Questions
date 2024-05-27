#include <iostream>

using namespace std;

void base(int array[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout << array[i] << " ";
    }
}

int selection_sort(int array[],int n)
{
    int temp;

    for(int i=0; i<n; i++)
    {
        int small = i;

        for(int j=i+1; j<n; j++)
        {
           if(array[j] < array[i])
           {
                temp = array[small];
                array[small] = array[j];
                array[j] = temp;
           }
        }
    }
}

int main()
{
    int array[] = {50,40,20,25,10,70};

    int n = sizeof(array) / sizeof(array[0]);

    cout << "Before Sorting array elements are - " << endl;

    base(array,n);

    cout << endl;

    selection_sort(array,n);

    cout << "After Sorting array elements are - " << endl;

    base(array,n);

    return 0;
}