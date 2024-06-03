#include <iostream>

using namespace std;

int find_index(int array[],int n,int key)
{
    for(int i=0; i<n; i++)
    {
        if(key == array[i])
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    int array[] = {10,40,20,50,15};
    int n = sizeof(array) / sizeof(array[0]);
    int key = 20;

    int result = find_index(array,n,key);

    if(result != -1)
    {
          cout << "Element " << key << " found at index " << result << endl;
    }

    else
    {
         cout << "Element " << key << " not found in the array" << endl;
    }

    return 0;
}