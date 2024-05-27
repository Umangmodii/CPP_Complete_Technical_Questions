#include <iostream>

using namespace std;

class A
{
    public:
        A()
        {
            cout << "Constructor is Called!" << endl;
        }

        ~A()
        {
            cout << "Destructor is Called!";
        }
};

int main()
{
    A a1;
    A a2;

    return 0;
}