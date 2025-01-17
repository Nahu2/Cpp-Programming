#include "Object Slicing.h"

void draw_shape_p(const Shape* shape){
    shape->draw();
}

void draw_shape_r(const Shape& shape){
    shape.draw();
}

void displayTime(){
    time_t t = time(NULL);
    std::cout << "Today is: " << ctime(&t) << std::endl;
}
