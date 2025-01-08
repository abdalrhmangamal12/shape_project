#include "shape.hpp"

#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle : public Shape{
    public:
    Rectangle()=default;
    Rectangle(double width,double hight);
    
    virtual double get_area()override;
    virtual double get_perimeter()override;
    ~ Rectangle()=default;
    private:
    double width_;
    double hight_;
};
#endif