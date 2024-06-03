#include <iostream>

using namespace std;

void intersection(int array1[],int n1,int array2[],int n2)
{
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n2; j++)
        {
            if(array1[i] == array2[j])
            {
                cout << array1[i] << " ";
                break;
            }
        }
    }
}

int main()
{
    int array1[] = {1, 2, 3, 4, 5}; // common 
    int array2[] = {4, 5, 6, 7, 8}; // common

    int n1 = sizeof(array1) / sizeof(array1[0]); 
    int n2 = sizeof(array2) / sizeof(array2[0]);

    cout << "Intersection of the two arrays: ";
    intersection(array1,n1,array2,n2);
    
    cout << endl;

    return 0;
}