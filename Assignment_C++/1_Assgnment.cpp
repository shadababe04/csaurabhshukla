#include<iostream>

using namespace std;

//1.WAP to check wheather the given number is odd or even

bool oddEven(const int num)
{
    if(0==num%2)
    {
        return true;
    }
    return false;
}
int main()
{
    int a;
    cout<<"Enter the number= "<<endl;
    cin>>a;
    if(true==oddEven(a))
    {
        cout<<"The number is EVEN";
    }
    else
    {
        cout<<"The number is ODD";
    }
    return 0;
}