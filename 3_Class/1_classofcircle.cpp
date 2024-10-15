//TODO: circle class with private member radius and member fn to cal circle area and circumference 

#include<iostream>

using namespace std;

class circle
{
    private:
        int radius;
    public:
        void area(int );
        void circumference(int);
};


void circle :: area(int r)
{
    cout << "Area of circle: "<< 3.14 * r * r << endl;
}

void circle :: circumference(int r)
{
    cout << "circumference of circle: "<< 2 * 3.14 * r << endl;
}



int main()
{
    circle c1;
    c1.area(5);
    c1.circumference(5);
    return 0;
}