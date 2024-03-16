//
// Created by w520 on 16.03.24.
//

#include "Bicycle.h"
#include <cstring>
#include <iostream>

Bicycle::Bicycle(const char* brand, const char* model, const Wheel& frontWheel, const Wheel& rearWheel)
        : brand(new char[strlen(brand) + 1])
        , model(new char[strlen(model) + 1])
        , frontWheel(frontWheel), rearWheel(rearWheel) {
            strcpy(this->brand, brand);
            strcpy(this->model, model);
}

Bicycle::~Bicycle() {
    delete[] brand;
    delete[] model;
    std::cout << "~Bicycle" << std::endl;
}

const char* Bicycle::getBrand() const {
    return brand;
}

const char* Bicycle::getModel() const {
    return model;
}

const Wheel & Bicycle::getFrontWheel() const {
    return frontWheel;
}

const Wheel & Bicycle::getRearWheel() const {
    return rearWheel;
}

