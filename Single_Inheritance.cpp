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

class B : public A
{
    public:
        int salary;

        B(int id,string name,int salary) : A(id,name)
        {
            this->id=id;
            this->name=name;
            this->salary=salary;
        }

        void display()
        {
            cout << "Id is : " << id << endl;
            cout << "Name is : " << name << endl;
            cout << "Salary is : " << salary << endl;
        }
};

int main()
{
    B b1(1,"Umang",20000);
    b1.display();

    return 0;
}