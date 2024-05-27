#include <iostream>

using namespace std;

int Binary_Search(int array[],int key,int n)
{
    int start = 0;
    int end = n - 1;
    int mid ;

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
    int array[] = {10,20,30,40,50,60,70,80};
    int key = 40;

    int n = sizeof(array) / sizeof(array[0]);

    int result = Binary_Search(array,key,n);

    if(result != -1)
    {
        cout << "Element is Present in array";
    }

    else 
    {
         cout << "Element is Not Present in array";
    }

    return 0;
}