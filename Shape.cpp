#include "Shape.h"
#include <iostream>

Shape::Shape(std::string name): _name(name) {
	std::cout << "ctor_shape" << std::endl;
}

Shape::~Shape() {
	std::cout << "dtor_shape" << std::endl;
}

void Shape::setName(const std::string name) {
	_name = name;
}

std::string Shape::getName() const {
	return _name;
}