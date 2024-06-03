#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    // Input array with duplicate values
    int array[] = {10, 20, 30, 20, 40, 50, 10, 30};
    int n = sizeof(array) / sizeof(array[0]);

    // Sorting the array
    sort(array, array + n);

    // Using a vector to store the result without duplicates
    vector<int> result;

    // Adding the first element
    result.push_back(array[0]);

    // Iterating through the array and adding unique elements to the result vector
    for (int i = 1; i < n; ++i)
    {
        if (array[i] != array[i - 1])
        {
            result.push_back(array[i]);
        }
    }

    // Output the array after removing duplicates
    cout << "Array after removing duplicates: ";
    
    for (int i = 0; i < result.size(); ++i)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
