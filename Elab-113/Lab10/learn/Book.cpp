#include "Book.h"

// :: scope resolution operator
Book::Book() {
    title = "";
    totalPage = 0;
    read = 0;
}

Book::Book(string title, int totalPage) {
    this->title = title;
    this->totalPage = totalPage;
    read = 0;
}

void Book::print() {
    cout << title << " (read: " << read << "/" << totalPage << ")" << endl;
}