#include <iostream>
#include <stdlib.h> 
#include <string.h> 
  
using namespace std;

struct Student
{
    int Id;
    string Name;
    int Age;
};

int main()
{
    int n = 3;

    struct Student student[n];

    student[0].Id = 1;
    student[0].Name = "Umang";
    student[0].Age = 22;

    student[1].Id = 2;
    student[1].Name = "Parth";
    student[1].Age = 21;

    student[2].Id = 3;
    student[2].Name = "Kishan";
    student[2].Age = 23;

    cout << "Student Details" << endl;

    for(int i = 0; i<n; i++)
    {
            cout << "Id : " << student[i].Id << endl;
            cout << "Name : " << student[i].Name << endl;
            cout << "Age : " << student[i].Age << endl;

            cout << endl;
    }

    return 0;
}