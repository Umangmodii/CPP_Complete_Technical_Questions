#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string str;
    ifstream filesystem("Data.txt");

    if(filesystem.is_open())
    {
        while(getline(filesystem,str))
        {
           cout << str << " ";
        }

         filesystem.close();
    }

    else
    {
        cout << "Unable to Open File";
    }

    return 0;
}