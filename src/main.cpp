
#include <iostream>
#include "../include/circle.hpp"
#include "../include/rectangle.hpp"

void print_area(Shape &obj){
   std::cout<<obj.get_area()<<std::endl;
}

void print_perimeter(Shape &obj){
   std::cout<<obj.get_perimeter()<<std::endl;

}
int main() {
   
    Circle circle(4.0);
    Rectangle rectangle(3.0,4.0);

    print_area(circle);


    return 0;
}