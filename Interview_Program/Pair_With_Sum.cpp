#include <iostream>

using namespace std;

void pair_sum(int array[],int key,int n)
{   
    bool found = false;

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(array[i] + array[j] == key)
            {
               found = true;
                cout << "Found Elements are : ( " << array[i] << "," << array[j] << " )";
            }
        }
    } 
}

int main()
{
    int array[] = {1,2,3,4,5};
    int key = 7;

    int n = sizeof(array) / sizeof(array[0]);

    cout << "Pair with Two Number " << key;
    pair_sum(array,key,n);

    return 0;
}