#include <iostream>

using namespace std;

int countarray(int array[],int n,int key)
{
    int count = 0;

    for(int i=0; i<n; i++)
    {
        if(array[i] == key)
        {
              count++; // Increment the counter if the element is found
        }
    }

    return count;
}

int main()
{
    int array[] = {1, 2, 3, 4, 2, 2, 5};
    int n = sizeof(array) / sizeof(array[0]);
    int key = 2;

    int count = countarray(array,n,key);

    cout << "Element " << key << " occurs " << count  << " times in the array." << endl;

    return 0;
}