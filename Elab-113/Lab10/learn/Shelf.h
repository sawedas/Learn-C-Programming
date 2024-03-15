#ifndef SHELF_H
#define SHELF_H

#include <iostream>
#include "Book.h"
using namespace std;

class Shelf {
private:
    Book **books;
    int maxBooks;
    int size; // ตอนนี้มีกี่เล่ม

public:
    Shelf(int);
    void addBook(Book *);
    int totalPages();
    int getSize();
    int getMaxBooks();
    void readMore(string, int);
};

#endif