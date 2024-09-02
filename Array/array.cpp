#include<iostream>

using namespace std;

// WAP to calculate the  SUM & AVERAGE of number

#define SIZE 5
int main()
{
    int a[SIZE]={0}; //declaration & defination
    int sum = 0;

    cout << "Enter the " << SIZE << " number " << endl;

    for(int i =0; i<SIZE ; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    cout << "Sum = " << sum << endl;
    cout << "Average = " << sum/SIZE << endl;

}
