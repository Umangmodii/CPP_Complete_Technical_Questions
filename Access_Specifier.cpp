#include <iostream>

using namespace std;

// Using Inheritance

class A
{
    public: // Access all Ojbects and Methods

        int id;
        string name;

        A(int id, string name)
        {
            this->id = id;
            this->name = name;
        }

    private: //  Can access with base class
        int salary;

    protected:
        string city;

};

class B : public A
{
    public:

      B(int id,string name,int salary,string city) :  A(id,name)
      {
            this->salary=salary;
            this->city=city;
      }  

    void display()
    {
        cout << "Id is : " << id << endl;
        cout << "Name is : " << name << endl; 
        cout << "Salary is : " << salary << endl;
        cout << "City is : " << city << endl;
    }

      private:
        int salary;      
};

int main()
{
    B b1(1,"Umang",30000,"Patan");

    b1.display();
    
    return 0;
}