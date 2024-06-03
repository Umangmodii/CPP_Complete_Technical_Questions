#include <iostream>

using namespace std;

void reverse_array(int array[], int n)
{
    int reverse[n];

    for(int i=0; i<n; i++)
    {
            reverse[i] = array[n - i - 1]; // 5 - 0 - 1 = 4 // 5 - 1 - 1 // 3 
    }

    cout << "Reverse Array is : " << endl;
    
    for(int i=0; i<n; i++)
    {
        cout << reverse[i] << " ";
    }
}

int main()
{
    int array[] = {10,20,30,40,50};
    int n = sizeof(array) / sizeof(array[0]);

    reverse_array(array,n);

    return 0;

}