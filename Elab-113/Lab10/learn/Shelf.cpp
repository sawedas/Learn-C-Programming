#include "Shelf.h"

Shelf::Shelf(int maxSize)
    : maxBooks(maxSize)
{
    books = (Book **)malloc(maxSize * sizeof(Book *));
    size = 0;
}

int Shelf::getSize() {
    return size;
}

int Shelf::getMaxBooks() {
    return maxBooks;
}

// TODO: implements these methods
void Shelf::addBook(Book *book) {
    if (size == maxBooks)
        return;
    books[size++] = book;
}

// FIXME:
int Shelf::totalPages() {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += books[i]->getTotalPage();
    }
    return total;

}

// TODO:
void Shelf::readMore(string title, int page) {
    for (int i = 0; i < size; i++){
        if (books[i]->getTitle() == title) {
            books[i]->readMore(page);
            return;
        }
    }
}