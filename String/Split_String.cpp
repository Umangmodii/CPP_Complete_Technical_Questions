#include <iostream>
#include <cstring>

using namespace std;

void string_split(string str,char remove)
{
    string ans = " ";
    
    int length = sizeof(str);

    for(int i=0; i<(int)str.size(); i++)
    {
            if(str[i] != remove)
            {
                ans += str[i];
            }

            else
            {
                cout << ans << " ";
                ans = "";
            }
    }
        cout << ans;
}

int main()
{
    string str = "Umang_Modi";
    char remove = '_';

   string_split(str,remove);

    return 0;
}