#include<iostream>
using namespace std;
class A
{
    public:
        void fn()
        {
            cout<<"Base";
        }
};
class B : public A
{
    public:
    void fn()
        {
            cout<<"Derived";
        }
};

int main()
{   B obj1;
    obj1.fn();
    return 0;
}