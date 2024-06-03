#include <iostream>

using namespace std;

void swap_string(char **str1, char **str2)
{
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

int main()
{
    char *str1 = (char*)"geeks";
    char *str2 = (char*)"forgeeks"; 

    swap_string(&str1,&str2);

    cout << "String 1 = " << str1 << " and " << "String 2 = " << str2;

    return 0;
}