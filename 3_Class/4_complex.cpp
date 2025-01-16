#include<iostream>

using namespace std;

/*
*   3+4i
*/

class Complex
{
    private:
        int a, b;
    public:
        void setData(int x, int y)
        {
            a=x;   // a & b are member variable
            b=y;
        }
        
        void showData();
};

void Complex:: showData()
{
    cout <<"\na ="<<a <<"b= "<<b;
}


int main()
{
    Complex c1, c2;    //object=instance
    return 0;
}