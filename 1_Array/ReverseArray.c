#include<stdio.h>
int arr[] = { 1,2,3,4,5};

void printArr(int *arr,int size)
{
    for(int i=0; i<size;i++)
    {
        printf("%d ", *(arr+i));
    }
    printf("\n");
}
void swap(int *a, int *b)
{
     *a = *a + *b;
     *b = *a - *b;
     *a = *a - *b;
}
void revArr(int *arr, int size)
{
    for(int i=0 ; i<(size/2);i++)
    {
            swap(&arr[i],&arr[size - i - 1]);
    }
}

int main()
{
    int sizeArr = sizeof(arr)/sizeof(int);
    printArr(arr,sizeArr); //Before
    revArr(arr,sizeArr);
    printArr(arr,sizeArr); //After
    return 0;
}