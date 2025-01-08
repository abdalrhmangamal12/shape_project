#include "../include/rectangle.hpp"

Rectangle::Rectangle(double width,double hight):width_{width},hight_{hight_}{}

 double Rectangle::get_area(){
    return width_*hight_;
}

double Rectangle::get_perimeter()  {
    return 2* width_ + 2*hight_;
}
