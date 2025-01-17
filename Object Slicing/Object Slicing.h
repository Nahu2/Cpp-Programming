#include <iostream>
#include <string>
#include <Ctime>

class Shape{
public :
    Shape(const std::string& m_description_param): m_description(m_description_param) {}
    Shape() = default;
    ~Shape() = default;
    virtual void draw() const{std::cout << "Shape::draw() called. Drawing " << m_description << std::endl;}
protected :
    std::string m_description{""};
};

class Ellipse : public Shape{
public :
    Ellipse(double m_x_radius_param, double m_y_radius_param, const std::string& m_description_param)
    : Shape(m_description_param), m_x_radius(m_x_radius_param),m_y_radius(m_y_radius_param) {}
    Ellipse() = default;
    ~Ellipse() = default;
virtual void draw() const{std::cout << "Ellipse::draw() called. Drawing " <<
    m_description << " with m_x_radius : " << m_x_radius << " and m_y_radius : " << m_y_radius << std::endl;}
protected:
    double get_x_radius() const{return m_x_radius;}
    double get_y_radius() const{return m_y_radius;}
private :
    double m_x_radius{0.0};
    double m_y_radius{0.0};
};

class Circle : public Ellipse{
public :
    Circle(double m_radius_param, const std::string& m_description_param)
    : Ellipse(m_radius_param, m_radius_param, m_description_param){}
    Circle() = default;
    ~Circle() = default;
virtual void draw() const{std::cout << "Circle::draw() called. Drawing " << m_description
    << " with radius : " << get_x_radius() << std::endl;}
};

void draw_shape_p(const Shape* shape);
void draw_shape_r(const Shape& shape);
void displayTime();
