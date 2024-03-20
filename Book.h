//
// Created by w520 on 16.03.24.
//

#ifndef HW_13032024_BOOK_H
#define HW_13032024_BOOK_H

#include <string>

class Book {
private:
    char _title[100]{};
    char _author[100]{};
    int _year;

public:
    Book();
    Book(const char* title, const char* author, int year);

    [[nodiscard]] const char* getTitle() const;
    [[nodiscard]] const char* getAuthor() const;
    [[nodiscard]] int getYear() const;

    void setTitle(const char* title);
    void setAuthor(const char* author);
    void setYear(int year);
};
#endif //HW_13032024_BOOK_H
