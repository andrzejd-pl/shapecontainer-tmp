#pragma once
#include "Shape.h"
class Ellipse : public Shape {
private:
	double _semi_major;
	double _semi_minor;
public:
	Ellipse(std::string name, double semi_major, double semi_minor) : Shape(name), _semi_major(semi_major), _semi_minor(semi_minor) {}
	virtual ~Ellipse() {}

	virtual double area() const;
	virtual double perimeter() const;

};

