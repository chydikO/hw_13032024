//
// Created by w520 on 16.03.24.
//

#include "Book.h"
#include <cstring>

using namespace std;

Book::Book() {
    _title[0] = '\0';
    _author[0] = '\0';
    _year = 0;
}

Book::Book(const char* title, const char* author, int year) : _year(year) {
    strncpy(_title, title, sizeof(_title) - 1);
    _title[sizeof(_title) - 1] = '\0';
    strncpy(_author, author, sizeof(_author) - 1);
    _author[sizeof(_author) - 1] = '\0';
}

void Book::setTitle(const char* title) {
    strncpy(_title, title, sizeof(_title) - 1);
    _title[sizeof(_title) - 1] = '\0';
}

void Book::setAuthor(const char* author) {
    strncpy(_author, author, sizeof(_author) - 1);
    _author[sizeof(_author) - 1] = '\0';
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

void Book::setYear(int year) {
    Book::_year = year;
}
