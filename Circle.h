#pragma once
#include "Ellipse.h"
class Circle : public Ellipse {
public:
	Circle(std::string name, double radius) :Ellipse(name, radius, radius) {}
	virtual ~Circle() {}

	virtual double area() const;
	virtual double perimeter() const;
	
};

