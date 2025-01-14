#include<iostream>

using namespace std;
struct Book
{
    /* data */
    int bookid;
    char title[20];
    float price;

    //Memeber function
    void displayBook()
    { 
        cout<<bookid<<" ";
        cout<<title<<" ";
        cout<<price<<endl;
    }

    //struct Book inputBook()
    void inputBook()
    {  
        //struct Book b;
        cout<<"Enter Bookid,name, price"<<endl;
        cin>>bookid;
        cin.ignore();
        cin.getline(title,20);
        cin>>price;
    //return b;
    } 
};



int main()
{
    cout<<"helloworld"<<endl;

    Book b1 = {123,"MyBook",224.34f};
    Book b2;
    //b2=inputBook();
    b2.inputBook();
    b1.displayBook();
    b2.displayBook();
    cout<<endl;

    return 0;
}