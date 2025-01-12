#include<iostream>
using namespace std;
// Traverse the array
int main()
{
    int arr[]={1,3,5,7,9,2,4,};
    int s = sizeof(arr)/sizeof(arr[0]);
    cout <<" Sizeof array = " << s <<endl;
    for(int i = 0; i < s; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
