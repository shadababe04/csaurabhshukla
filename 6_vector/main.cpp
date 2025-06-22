/*//Vector
1.Declaration
 #include<vector>
 vector<datatype>vector_name;
 vector<datatype>vector_name(size);

2.size
 v.size()----length
 
*/


#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    cout <<"size: "<<v.size()<<endl;
    cout <<"Capacity: "<<v.capacity()<<endl;
    v.push_back(5);
    cout <<"Capacity: "<<v.capacity()<<endl;
    return 0;
}