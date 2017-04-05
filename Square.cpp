#include "Square.h"
#include <iostream>


Square::Square(std::string name, double width) : Rectangle(name,width,width) {
	std::cout << "ctor_square" << std::endl;
}


Square::~Square() {
	std::cout << "dtor_square" << std::endl;
}

double Square::area() const {
	return Rectangle::area();
}

double Square::perimeter() const {
	return Rectangle::perimeter();
}
