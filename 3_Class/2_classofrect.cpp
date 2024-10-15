//TODO: class with rectangle 

#include<iostream>

using namespace std;

class rectangle
{
    private:
        int length;
    public:
        void area(int);
};

void rectangle :: area(int l1)
{
    cout <<"Area: " << l1 * l1;
}

int main()
{
    int len = 10;
    rectangle rect1;
    rect1.area(5);
    return 0;
}