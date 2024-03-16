//
// Created by w520 on 16.03.24.
//

#ifndef HW_13032024_BOOK_H
#define HW_13032024_BOOK_H

#include <string>

class Book {
private:
    char* _title;
    char* _author;
    int _year;

public:
    Book();
    Book(const char* title, const char* author, int year);
    ~Book();

    [[nodiscard]] const char* getTitle() const;
    [[nodiscard]] const char* getAuthor() const;
    [[nodiscard]] int getYear() const;

    void setTitle(char *title);
    void setAuthor(char *author);
    void setYear(int year);
};
#endif //HW_13032024_BOOK_H
