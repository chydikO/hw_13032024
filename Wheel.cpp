//
// Created by w520 on 16.03.24.
//

#include "Wheel.h"
Wheel::Wheel(double diameter, double width) : diameter(diameter), width(width) {}

double Wheel::getDiameter() const {
    return diameter;
}

double Wheel::getWidth() const {
    return width;
}