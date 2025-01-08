#include "../include/circle.hpp"


Circle::Circle(double radius):radius_{radius}{};

 double Circle::get_area() {
    return radius_*radius_;
}

double Circle::get_perimeter()  {
    return 2.0*3.143*radius_;
}

