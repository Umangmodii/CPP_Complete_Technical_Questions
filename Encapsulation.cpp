#include <iostream>

using namespace std;

// Create a constructor

class A
{
    public:
        int id;
        string name; 

        A(int id,string name)
        {
            this->id = id;
            this->name = name;
        }

        void setid(int id)
        {
            this->id = id;
        }

        int getid()
        {
            return id;
        }

        void setname(string name)
        {
            this->name = name;
        }

        string getname()
        {
            return name;
        }
};

int main()
{
    A a1(1,"Umang");

    cout << "Id is : " << a1.getid() << endl;
    cout << "Name is : " << a1.getname() << endl; 

    a1.setid(2);
    a1.setname("Mayank");

    cout << "Id is : " << a1.getid() << endl;
    cout << "Name is : " << a1.getname() << endl; 

    return 0;
}