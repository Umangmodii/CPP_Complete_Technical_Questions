#include <iostream>

using namespace std;

void Towertohanoi(int N,char from_road, char to_road, char aux_road)
{
    if(N == 0)
    {
        return;
    }

    else
    {
        Towertohanoi(N-1,from_road,to_road,aux_road);

        cout << "Move Disk : " << N << " From Road " << from_road << " To Road " << to_road << " Aux Road " << aux_road << endl;
    
        Towertohanoi(N-1,aux_road,to_road,from_road);
    }
}

int main()
{
    int N = 3;

    // Names of Road
    Towertohanoi(N,'A','B','C');

    return 0;   
}