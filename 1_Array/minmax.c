#include <stdio.h>

void MinMax(int *a, int len,int *min,int *max)
{
    *min= *max = a[0];
    for(int i=1;i<len;i++)
    {
        if(a[i]>*max)
        {
            *max=a[i];
        }
        if(a[i]<*min)
        {
            *min=a[i];
        }
    }
}

int main()
{
    int a[]= { 23,6,13,45};
    int MIN,MAX;
    int len = sizeof(a)/sizeof(a[0]);
    printf("length = %d \n",len);
    MinMax(a,len,&MIN,&MAX);
    printf("Min= %d, MAX= %d",MIN,MAX);

    return 0;
}