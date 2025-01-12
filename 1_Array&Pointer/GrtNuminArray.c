#include<stdio.h>

int arr[]={8,5,14,3,1};
int sizeArr= sizeof(arr)/sizeof(int);

int grtNumbr(int *arr, int size)
{
    int maxNumbr=0;
    for(int i =0; i<size; i++)
    {
        if (arr[i]>maxNumbr)
        {
            maxNumbr = arr[i];
        }
    }
    return maxNumbr;
}

int main()
{
    int MaxNumbr=0;
    MaxNumbr = grtNumbr(arr, sizeArr);
    printf("Max number is %d", MaxNumbr);

    return 0;
}