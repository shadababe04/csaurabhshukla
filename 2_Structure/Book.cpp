#include<iostream>

using namespace std;
struct Book
{
    /* data */
    int bookid;
    char title[20];
    float price;
};

//struct Book inputBook()
void inputBook(struct Book &b)
{
    //struct Book b;
    cout<<"Enter Bookid,name, price"<<endl;
    cin>>b.bookid;
    cin.ignore();
    cin.getline(b.title,20);
    cin>>b.price;
    //return b;
} 

void displayBook(struct Book b)
{ 
    cout<<b.bookid<<" ";
    cout<<b.title<<" ";
    cout<<b.price<<endl;
}

int main()
{
    cout<<"helloworld"<<endl;

    struct Book b1 = {123,"MyBook",224.34f};
    struct Book b2;
    //b2=inputBook();
    inputBook(b2);
    displayBook(b1);
    displayBook(b2);
    cout<<endl;

    return 0;
}