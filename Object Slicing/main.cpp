//Polymorphic Object Slicing
#include <iostream>
#include "Object Slicing.h"

int main(){
    Circle circle1(1.1,"circle1");
    Ellipse ellipse1(23.1,1.2,"ellipse1");
    Circle circle2(12.1,"circle2");
    Ellipse ellipse2(17.4,19.2,"ellipse2");
    Circle circle3(16.2,"circle3");
    Ellipse ellipse3(44.3,6.2,"ellipse3");
    std::cout << "sizeof (circle1) : " << sizeof(circle1) <<" bytes" << std::endl;
    std::cout << "sizeof (ellipse1) : " << sizeof(ellipse1) <<" bytes" <<
    std::endl;
    std::cout << "-------------------" << std::endl;
    //If you store raw object data in an array set up to store base class objects
    //the data is going to be sliced off!
    Shape shapes1[] {circle1,ellipse1,circle2,ellipse2,circle3,ellipse3};
    for(Shape& s : shapes1){
        std::cout << "sizeof (object) : " << sizeof(s) <<" bytes" << std::endl;
        s.draw(); //
    }
    std::cout << "-------------------" << std::endl;

//Raw pointers
    Shape* shapes2[] {&circle1,&ellipse1,&circle2,&ellipse2,&circle3,&ellipse3};
    for (Shape* shape_ptr : shapes2){
        std::cout << "Inside array , sizeof(*shape_ptr) : "
        << sizeof(*shape_ptr) << " bytes" << std::endl;
        shape_ptr->draw();
        std::cout << std::endl;
    }
    std::cout << "-------------------" << std::endl;
    displayTime();
    return 0;
}


