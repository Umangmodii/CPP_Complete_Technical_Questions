#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream filesystem("Data.txt");

    if(filesystem.is_open())
    {
        cout << "Hello!" << endl;

        filesystem.close();
    }

    else
    {
        cout << "Unable to opening file!";
    }


    return 0;
}