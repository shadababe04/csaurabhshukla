#include<stdio.h>
int *findmid(int *a,int n)
{
    return &a[n/2];
}
int main()
{
    int a[]={2,5,12,55,3};
    int n = sizeof(a)/sizeof(a[0]);
    int *mid = findmid(a,n);
    printf("Mid = %d", *mid);
    return 0;
}