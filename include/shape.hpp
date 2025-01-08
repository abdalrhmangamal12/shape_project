#include <iostream>
#ifndef SHAPE_H
#define SHAPE_H
class Shape{
   public:
   Shape()=default;
   virtual double get_area()=0;
   virtual double get_perimeter()=0;
   virtual ~ Shape()=default;
};
#endif
