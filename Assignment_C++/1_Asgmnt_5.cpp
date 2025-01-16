#include<iostream>

using namespace std;
//5.WAP to check a number is prime or not
bool prime(int n)
{
    for(int i=2; i<=n; i++)
    {
        if(0==n%i && 0==n%1)
        { 
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    if(prime(8))
    {
        printf(" Number is PRIME");   
    }
    else
        printf(" Number is NOT PRIME");
    return 0;
}