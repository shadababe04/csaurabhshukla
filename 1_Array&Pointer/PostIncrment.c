#include<stdio.h>

int main()
{
    int a[]={32,14,55,63,77,22};
    int *p = a;
     int len = sizeof(a) / sizeof(a[0]); // Calculate the length of the array
    int *end = a + len; // Pointer to one past the last element of the array

    while (p < end) // Iterate until the pointer reaches the end
    printf("%d ,",*(p++));
    return 0;
}