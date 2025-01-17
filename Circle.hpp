#pragma once
#include "Shape.hpp"

class Circle final : public Shape
{
public:
    Circle(double r, Color color=Color::RED);
    Circle(const Circle & other) = default;
    Circle(Circle&& other) noexcept;
    Circle& operator=(Circle&& other) noexcept;

    double getArea() const override;
    double getPerimeter() const override;
    double getRadius() const noexcept;
    [[deprecated]]
    double getPi() const noexcept;
    void print() const override;

private:
    Circle() = delete; // doesn't allow to call default constructor

    double r_;
};
