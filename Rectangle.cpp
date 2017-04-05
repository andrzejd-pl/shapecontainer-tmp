#include "Rectangle.h"
#include <iostream>


Rectangle::Rectangle(std::string name, double width, double height) : Shape(name), _width(width), _height(height) {
	std::cout << "ctor_rectangle" << std::endl;
}


Rectangle::~Rectangle() {
	std::cout << "dtor_rectangle" << std::endl;
}

double Rectangle::area() const {
	return _width*_height;
}

double Rectangle::perimeter() const {
	return 2 * (_width + _height);
}