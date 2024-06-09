#include <iostream>

using namespace std;

// First sum = 10 + 20 = 30;
// Then, Avg = sum / n;

int Average_Array(int array[], int n)
{
    int sum = 0;

    for(int i=0; i<n; i++)
    {
       sum = sum += array[i];
    }

    return sum / n;
}

int main()
{
    int array[] = {10, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(array) / sizeof(array[0]);

    cout << Average_Array(array,n);

    return 0;
}