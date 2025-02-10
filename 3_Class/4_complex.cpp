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
        Complex add(Complex C)
        {
            Complex temp;
            temp.a=a+C.a;
            temp.b=b+C.b;
            return temp;
        }
};

void Complex:: showData()
{
    cout <<"\na= "<<a <<" b= "<<b;
}


int main()
{
    Complex c1, c2, c3;    //object=instance
    c1.setData(5,3);
    c2.setData(6,4);
    c3=c1.add(c2);
    c1.showData();
    c2.showData();
    c3.showData();
    return 0;
}