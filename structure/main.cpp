#include <iostream>
#include <cstring>
using namespace std;

struct Book {
  int bookid;
  char title[20];
  float price;
};

void bookInput(struct Book *b) {
  cout << "\nEnter the bookid, title and price: ";
  cin >> b->bookid >> b->title >> b->price;
  cin.ignore();  // Discard any remaining characters in the buffer
//  return b;
}

void display(struct Book b) {
  cout << "\nBookid: " << b.bookid;
  cout << " Title: " << b.title;
  cout << " Price: " << b.price;  // Corrected output format
}

int main() {
  Book b1 = {1, "C++", 500.00};
  Book b2, b3;
  b2.bookid = 2;
  strcpy(b2.title, "Java");
  b2.price = 300.00;
  bookInput(&b3);
  display(b1);
  display(b2);
  display(b3);

  return 0;
}
