#include <iostream>

using namespace std;

void mergeArrays(int array1[],int n1,int array2[],int n2,int mergearray[])
{
    int index = 0;

    for(int i=0; i<n1; i++)
    {
        mergearray[index++] = array1[i];
    }   

     for(int j=0; j<n2; j++)
    {
        mergearray[index++] = array2[j];
    }
}

int main()
{
    int array1[] = {10,20,30};
    int array2[] = {40,50,60};
    
    int n1 = sizeof(array1) / sizeof(array1[0]);
    int n2 = sizeof(array2) / sizeof(array2[0]);

    int mergedSize = n1 + n2;

     // Create an array to store the merged array
    int mergedArray[mergedSize];

    // Merge the arrays
    mergeArrays(array1, n1, array2, n2, mergedArray);

    // Print the merged array
    cout << "Merged Array: ";
    for (int i = 0; i < mergedSize; ++i)
    {
        cout << mergedArray[i] << " ";
    }
    cout << endl;


    return 0;
}