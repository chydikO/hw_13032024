//
// Created by w520 on 16.03.24.
//

#ifndef HW_13032024_BICYCLE_H
#define HW_13032024_BICYCLE_H

#include <string>
#include "Wheel.h"
using namespace std;

class Bicycle {

private:
    char* brand;
    char* model;
    Wheel frontWheel;
    Wheel rearWheel;

public:
    Bicycle(const char* brand, const char* model, const Wheel& frontWheel, const Wheel& rearWheel);

    [[nodiscard]] const char* getBrand() const;
    [[nodiscard]] const char* getModel() const;
    [[nodiscard]] const Wheel & getFrontWheel() const;
    [[nodiscard]] const Wheel & getRearWheel() const;
};

#endif //HW_13032024_BICYCLE_H
