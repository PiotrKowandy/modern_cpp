#pragma once

#include "Rectangle.hpp"

class Square : public Rectangle
{
public:
    Square(double x);
    Square(const Square & other) = default;
    Square(Square&& other) noexcept;
    Square& operator=(Square&& other) noexcept;

    double getArea();
    double getPerimeter();
    double getY() const = delete;
    void print();

private:
    Square() = delete;
    double x_;
};
