#include <iostream>

using namespace std;

int Missing_array(int array[], int n)
{
    int calsum = (n + 1) * (n + 2) / 2;  // (5 + 1) * (5 + 2) / 2 // (6) * (7) / 2 // 42 / 2 // 21
    int sum = 0;

    for(int i=0; i<n; i++)
    {
        sum += array[i];
    }

    return calsum - sum; // 21 - 17 // 4
}

int main()
{
    int array[] = {1,2,3,5,6};
    int n = sizeof(array) / sizeof(array[0]);

    int missing_number = Missing_array(array,n);

    cout << "Missing Value is : " << missing_number;

    return 0;
}