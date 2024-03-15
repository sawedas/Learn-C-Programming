#ifndef BOOK_H
#define BOOK_H

#include <iostream>
using namespace std;

class Book {
private: // data hiding -> hide data member
    string title;
    int totalPage;
    int read;

public:
    // Constructor
    Book();
    Book(string, int);

    void readMore(int);
    void print(); // lowerCamelCase
    bool isTitle(string);

    // Getter, Accerssor
    string getTitle();
    int getTotalPage();
    int getRead();

    // Setter, Mutator
    void setTitle(string title);

    // ToString
    string toString();
};

#endif