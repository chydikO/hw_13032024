//
// Created by w520 on 16.03.24.
//

#ifndef HW_13032024_WHEEL_H
#define HW_13032024_WHEEL_H

class Wheel {
private:
    double diameter;
    double width;

public:
    Wheel(double diameter, double width);

    [[nodiscard]] double getDiameter() const;
    [[nodiscard]] double getWidth() const;
};

#endif //HW_13032024_WHEEL_H
