#pragma once
#include "Rectangle.h"
#include <string>
class Square : public Rectangle {
public:
	Square(std::string name, double width);
	virtual ~Square();
	virtual double area() const;
	virtual double perimeter() const;
};

