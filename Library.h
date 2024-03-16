//
// Created by w520 on 16.03.24.
//

#ifndef HW_13032024_LIBRARY_H
#define HW_13032024_LIBRARY_H

#include <string>
#include <vector>
#include "Book.h"

class Library {
private:
    char* _name;
    char* _address;
    Book* _books;
    int _bookCount;

public:
    Library();
    Library(const char* name, const char* address);
    ~Library();

    void addBook(const Book& book);
    void printBooks() const;

    [[nodiscard]] char *getName() const;
    [[nodiscard]] char *getAddress() const;
    [[nodiscard]] Book *getBooks() const;
    [[nodiscard]] int getBookCount() const;
};

#endif //HW_13032024_LIBRARY_H
