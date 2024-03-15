#include <iostream>
#include "Book.h"
using namespace std;

int main(){
    Book python; // use defaule constructor
    python.setTitle("Python for Beginner ");
    Book cpp("Advance of C++", 580);
    cpp.readMore(100);

    Book *books[10];
    books[0] = &python;
    books[1] = &cpp;
    books[2] = new Book("Next to Java", 1080);
    books[3] = new Book();

    books[3]->setTitle("Statistical Programming using Paddas");

    int total = 0;
    for (int i = 0; i < 4; i++){
        books[i]->readMore(i);
        books[i]->print();
        total += books[i]->getTotalPage();
    }

    cout << "Total pages in my book list: " << total << endl;
}