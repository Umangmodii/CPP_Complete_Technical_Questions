#include <iostream>

using namespace std;

string remove_spaces(string str)
{
    string result = ""; 

   for(int i=0; str[i] != '0'; i++)
   {
        if(str[i] != ' ')
        {
            result += str[i];
        }
   }

    return result;
}

int main()
{
    string str = "Gfg to the moon"; 
  
    cout << "Without spaces: " << remove_spaces(str) << endl; 
  

    return 0;
}