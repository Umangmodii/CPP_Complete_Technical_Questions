#include <iostream>
#include <thread>  

using namespace std;

void thread1(int N)
{
        for(int i=0; i<N; i++)
        {
            cout << "Thread 1 :: callable => function pointer\n";  
        }
}

void thread2(int N)
{
        for(int i=0; i<N; i++)
        {
            cout << "Thread 2 :: callable => function Objects\n";  
        }
}

void thread3(int N)
{
        for(int i=0; i<N; i++)
        {
            cout << "Thread 3 :: callable => Lambada Expression\n";  
        }
}

int main()
{
    thread t1(thread1,2);
    thread t2(thread2,2);
    thread t3(thread3,2);

    t1.join();
    t2.join();
    t3.join();

    return 0;
}