#include <iostream>

using namespace std;

int Find_Max_Min(int array[], int n)
{
    int Max = array[0];
    int Min = array[0];

    for(int i=0; i<n; i++)
    {
        if(Max < array[i])
        {
            Max = array[i];
        }
    }

    cout << "Maximum Value is : " << Max << endl;

    for(int j=0; j<n; j++)
    {
        if(Min > array[j])
        {
            Min = array[j];
        }
    }

    cout << "Minimum Value is : " << Min;
}

int main()
{
    int array[] = {10,20,30,40,50,60,70};

    int n = sizeof(array) / sizeof(array[0]);

    Find_Max_Min(array,n);

    return 0;
}