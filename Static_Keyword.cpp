#include <iostream>

using namespace std;

class A
{
    public:
        int id;
        string name;
        static float salary;

        A(int id, string name, float salary)
        {
            this->id=id;
            this->name=name;
            this->salary=salary;
        }

        void display()
        {
            cout << "Id is : " << id << endl;
            cout << "Name is : " << name << endl;
            cout << "Salary is : " << name;
        }
};

int main()
{
    A a1(1,"Umang",6.5);

    a1.display();

    return 0;
}
