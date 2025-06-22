#include<iostream>
using namespace std;

int main()
{
    float x =4.5;
    float *ptr = &x;

    cout<<ptr <<endl;
    cout << *ptr <<endl;
    return 0;
}