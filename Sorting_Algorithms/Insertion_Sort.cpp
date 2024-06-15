#include <iostream>

using namespace std;

void base(int array[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout << array[i] << " ";
    }
}

void insertion_sort(int array[], int n)
{
        int temp = array[i]; // Store the current element
        int j = i - 1; // Initialize j to the previous element

        // Shift elements of the sorted subarray to the right
        while(j >= 0 && temp <= array[j]) //  0 >= 0 && 0 <= array[0]
        {
            array[j+1] = array[j]; // Shift element to the right
            j = j - 1; // Move to the previous element
        }
            array[j+1] = temp; // Insert temp in the correct position
}

int main()
{
    int array[] = {89, 45, 35, 8, 12, 2};
    int n = sizeof(array) / sizeof(array[0]);

    cout << "Before Sorting : ";
    
    base(array,n);

    insertion_sort(array,n);

    cout << "After Sorting : ";
    
    base(array,n);

    return 0;
}