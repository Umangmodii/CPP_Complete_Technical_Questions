#include <iostream>

using namespace std;

class shape
{
  public:
        void draw();
};

class Rectangle : shape
{
    public:
        void draw()
        {
            cout << "Drawing Rectangle!" << endl;
        }
};

class Oval : shape
{
    public:
        void draw()
        {
            cout << "Oval Rectangle!" << endl;
        }
};

int main()
{
    Rectangle r;
    Oval o;

    r.draw();
    o.draw();

    return 0;
}