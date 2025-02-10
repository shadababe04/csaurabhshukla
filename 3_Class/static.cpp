#include<iostream>
using namespace std;

class item
{
    public:
        int a, b;  //Instance Member Variable(IMV)
        static int k; //Static Member Variable(SMV) class variable-share resource


};
int item::k;
int main()
{
    item i1,i2;
    i1.a=5;
    cout<<i2.a<<endl;
    //i2.k=6;
    item::k=7;
    cout<<i1.k;
    return 0;
}