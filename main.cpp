#include <iostream>
#include "Wheel.h"
#include "Bicycle.h"
#include "Library.h"
#include "Book.h"
using namespace std;


int main() {
    cout << "---Task 1---" << endl;
    Wheel frontWheel(26.0, 2.1);
    Wheel rearWheel(26.0, 2.9);

     Bicycle bicycle("Giant", "Anthem", frontWheel, rearWheel);

    cout << "Brand: " << bicycle.getBrand() << endl;
    cout << "Model: " << bicycle.getModel() << endl;
    cout << "Front Wheel Diameter: " << bicycle.getFrontWheel().getDiameter() << endl;
    cout << "Front Wheel Width: " << bicycle.getFrontWheel().getWidth() << endl;
    cout << "Rear Wheel Diameter: " << bicycle.getRearWheel().getDiameter() << endl;
    cout << "Rear Wheel Width: " << bicycle.getRearWheel().getWidth() << endl;
    cout << endl;

    cout << "---Task 2---" << endl;
    Library library("My Library", "8 march St. 22-15");

    Book book1("Book 1", "Author 1", 2024);
    Book book2("Book 2", "Author 2", 1985);

    library.addBook(book1);
    library.addBook(book2);

    library.printBooks();
    cout << "Books count in library -> " <<  library.getBookCount() << endl;
    cout << "library name -> " <<  library.getName() << endl;
    cout << "library address ->" <<  library.getAddress() << endl;
    
    return 0;
}
