#include <iostream>

using namespace std;

class Encapsulation
{
    private:
     // data hidden from outer functions 
        int x;
        int y;

    public:
        void setx(int x)
        {
            this->x=x;
        }

        int getx()
        {
            return x;
        }

        void sety(int y)
        {
            this->y=y;
        }

        int gety()
        {
            return y;
        }
};

int main()
{
    Encapsulation e1;
    e1.setx(10);
    e1.sety(20);

    cout << "X value is : " << e1.getx() << endl; 
    cout << "X value is : " << e1.gety() << endl; 
    
    return 0;
}