#include <iostream>

using namespace std;

class A
{
    public:
        int id;
        string name;

        A(int id, string name)
        {
            this->id=id;
            this->name=name;
        }
};

class B
{
    public:
        string city;

        B(string city)
        {
            this->city=city;
        }
};

class C : public A,B
{
    public:
        int salary;

        C(int id,string name,string city, int salary) : A(id,name),B(city)
        {
            this->id=id;
            this->name=name;
            this->city=city;
            this->salary=salary;
        }

        void display()
        {
            cout << "Id is : " << id << endl;
            cout << "Name is : " << name << endl;
            cout << "City is : " << city << endl;
            cout << "Salary is : " << salary << endl;
        }
};

int main()
{
    C c1(1,"Umang","Patan",35000);
    c1.display();

    C c2(2,"Mayank","Patan",65000);
    c2.display();

    return 0;
}