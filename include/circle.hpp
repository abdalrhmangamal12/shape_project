#include "shape.hpp"

#ifndef CIRCLE_H
#define CIRCLE_H
class Circle : public Shape{
    public:
    Circle()=default;
    Circle(double radius);
    
    virtual double get_area()override;
    virtual double get_perimeter()override;
    ~ Circle()=default;
    private:
    double radius_;
};
#endif