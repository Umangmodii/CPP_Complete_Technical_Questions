#include <iostream>

using namespace std;

int Linear_Search(int array[], int key, int n)
{
    for(int i=0; i<n; i++)
    {
        if(array[i] == key)
        {
            return i+1;
        }
    }
        return -1;
}

int main()
{
    int array[] = {10,20,30,40,50,60};
    int key = 20;
    
    int n = sizeof(array) / sizeof(array[0]);

    int result = Linear_Search(array,key,n);

    if(result == -1)
    {
        cout << "Element is Not Find in List";
    }

    else
    {
        cout << "Element Is Find in List";
    }

    return 0;
}