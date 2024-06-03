#include <iostream>

using namespace std;

int main()
{
    int array[] = {10,20,30,40,50};
    int n = 5; // size of Array

    int largest = array[0]; // initialize Index 0
    int smallest = array[0];

    for(int i=0; i<n; i++)
    {
        if(largest < array[i]) // 0 < 5 = 5
        {
            largest = array[i];
        }
    }

    for(int i=0; i<n; i++)
    {
        if(smallest > array[i]) // 0 > 5
        {
            smallest = array[i];
        }
    }

    cout << "Largest Elements is : " << largest << endl;
    cout << "Smallest Elements is : " << smallest;


    return 0;
}