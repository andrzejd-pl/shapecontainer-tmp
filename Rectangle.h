#pragma once
#include "Shape.h"
#include <string>
class Rectangle : public Shape {
private:
	double _height;
	double _width;
public:
	Rectangle(std::string name, double width, double height);
	virtual ~Rectangle();
	virtual double area() const;
	virtual double perimeter() const;
};

