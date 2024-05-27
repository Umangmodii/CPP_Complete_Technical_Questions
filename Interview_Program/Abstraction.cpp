#include <iostream>

using namespace std;

class Abstraction
{
    private:
        int p;
        int q;

    public:
        void set(int p, int q)
        {
            this->p=p;
            this->q=q;
        }

        void display()
        {
            cout << "P value is : " << p << endl;
            cout << "P value is : " << q << endl;
        }
};  

int main()
{
    Abstraction a1;

    a1.set(50,100);
    a1.display();

    return 0;
}