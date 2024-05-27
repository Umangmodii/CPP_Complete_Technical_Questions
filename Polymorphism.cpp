// #include <iostream>

// using namespace std;

// class A
// {
//     public:
//         int id;
//         string name;

//         A(int id, string name)
//         {
//             this->id=id;
//             this->name=name;
//         }

//         void display()
//         {
//             cout << "Id is : " << id << endl;
//             cout << "Name is : " << name << endl;
//         }
// };

// class B : public A
// {
//     public:

//         string address;

//        void A(string address)
//         {
//             this->address=address;
//         }

//         void display()
//         {
//             cout << "Address is : " << address << endl;
//         }
// };

// class C : public A
// {
//     public:
//         int salary;

//         void A(int salary)
//         {
//             this->salary=salary;
//         }

//            void display()
//         {
//             cout << "Salary is : " << salary << endl;
//         }
// };

// int main()
// {

//     A a1;
//     a1.display();

//     B b1;
//     b1.display();

//     C c1;
//     c1.display();

//     return 0;
// }