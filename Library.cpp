//
// Created by w520 on 16.03.24.
//

#include "Library.h"
#include <iostream>
#include <cstring>

using namespace std;

Library::Library() {
    this->_name = nullptr;
    this->_address = nullptr;
    this->_books = nullptr;
    this->_bookCount = 0;
}

Library::Library(const char* name, const char* address) {
    _name = new char[strlen(name) + 1];
    strcpy(_name, name);

    _address = new char[strlen(address) + 1];
    strcpy(_address, address);

    _books = nullptr;
    _bookCount = 0;
}

Library::~Library() {
    delete[] _name;
    delete[] _address;
    delete[] _books;
    cout << "~Library" << endl;
}

void Library::addBook(const Book& book) {
    if (_books == nullptr) {
        _books = new Book[1];
        _books[0] = book;
        _bookCount = 1;
    } else {
        Book* newBooks = new Book[_bookCount + 1];
        for (int i = 0; i < _bookCount; i++) {
            newBooks[i] = _books[i];
        }
        newBooks[_bookCount] = book;
        delete[] _books;
        _books = newBooks;
        _bookCount++;
    }
}

void Library::printBooks() const {
    for (int i = 0; i < _bookCount; i++) {
        cout << "Title: " << _books[i].getTitle() << endl;
        cout << "Author: " << _books[i].getAuthor() << endl;
        cout << "Year: " << _books[i].getYear() << endl;
        cout << endl;
    }
}

char* Library::getName() const {
    return const_cast<char *>(_name);
}

char* Library::getAddress() const {
    return const_cast<char *>(_address);
}

Book* Library::getBooks() const {
    return _books;
}

int Library::getBookCount() const {
    return _bookCount;
}