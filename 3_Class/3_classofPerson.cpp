#include<iostream>
using namespace std;

class Person
{
private:
    /* data */
    char name[20];
    int age;
public:
    void getperson();
    void displayperson();
};
void Person::getperson()
{
    cout << "Enter the name: ";
    //cin >> name ;
    cin.getline(name, 20);
    cout << "Enter the : ";
    cin >> age;
}
void Person::displayperson()
{
    cout << "Name: " << name <<endl;
    cout << "age: "<< age << endl;
}


int main()
{
    Person p1;
    p1.getperson();
    p1.displayperson();
    return 0;
}