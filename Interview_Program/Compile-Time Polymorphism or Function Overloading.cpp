#include <iostream>

using namespace std;

class Polymorphism
{
    public:
        void compile(int x)
        {
            cout << "X values is : " << x << endl;
        }

        void compile(double x)
        {
            cout << "X values is : " << x << endl;
        }

        void compile(int x,int y)
        {
            cout << "X values is : " << x << endl;
            cout << "Y values is : " << y << endl;
        }
};

int main()
{
    Polymorphism p1;

    p1.compile(10);
    p1.compile(10.5);
    p1.compile(20,30);

    return 0;
}