#include <iostream>

using namespace std;

int Binary_search(int array[], int key, int n)
{
    int start = 0;
    int mid;
    int end = n - 1;

    while(start <= end)
    {
        mid = (start + end) / 2;

        if(key == array[mid])
        {
            return mid;
        }

        else if(key < array[mid])
        {
            end = mid - 1;
        }

        else 
        {
            end = mid + 1;
        }
    }

    return -1;
}

int main()
{
    int array[] = {11, 14, 25, 30, 40, 41, 52, 57, 70};
    int key = 11;

    int n = sizeof(array) / sizeof(array[0]);

    int result = Binary_search(array,key,n);

    if(result != -1)
    {
        cout << "Element is Found!";
    }

    else 
    {
        cout << "Element is Not Found! " << key;
    }

        return 0;
}