#include <iostream>

using namespace std;

int findSecondLargest(int array[], int n)
{
    int largest = array[0];
    int secondLargest = INT_MIN;

    // Find the largest element in the array
    for (int i = 1; i < n; ++i)
    {
        if (array[i] > largest)
        {
            secondLargest = largest;
            largest = array[i];
        }
        else if (array[i] > secondLargest && array[i] != largest)
        {
            secondLargest = array[i];
        }
    }

    return secondLargest;
}

int main()
{
    int array[] = {10, 20, 5, 15, 30};
    int n = sizeof(array) / sizeof(array[0]);

    int secondLargest = findSecondLargest(array, n);

    if (secondLargest != INT_MIN)
    {
        cout << "Second Largest Number: " << secondLargest << endl;
    }
    else
    {
        cout << "Array does not have a second largest number." << endl;
    }

    return 0;
}
