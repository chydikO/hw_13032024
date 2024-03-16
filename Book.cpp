//
// Created by w520 on 16.03.24.
//

#include "Book.h"
#include <cstring>
#include <iostream>

Book::Book(const char* title, const char* author, int year) {
    _title = new char[strlen(title) + 1];
    strcpy(_title, title);

    _author = new char[strlen(author) + 1];
    strcpy(_author, author);

    _year = year;
}

Book::Book() : _year(_year = 0) {
    this->_title = nullptr;
    this->_author = nullptr;
}

Book::~Book() {
    delete[] _title;
    delete[] _author;
    std::cout << "~Book" << std::endl;

}

const char* Book::getTitle() const {
    return _title;
}

const char* Book::getAuthor() const {
    return _author;
}

int Book::getYear() const {
    return _year;
}

void Book::setTitle(char *title) {
    Book::_title = title;
}

void Book::setAuthor(char *author) {
    Book::_author = author;
}

void Book::setYear(int year) {
    Book::_year = year;
}
