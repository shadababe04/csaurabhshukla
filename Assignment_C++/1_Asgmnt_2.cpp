#include<iostream>

using namespace std;
//2.WPA to calculate factorial of a number
int myFactorial(int x)
{
    if(1==x)
    {
        return 1;
    }
    return x*(myFactorial(x-1));

}
int main()
{

    cout<<"FACT= "<<myFactorial(5);

    return 0;
}