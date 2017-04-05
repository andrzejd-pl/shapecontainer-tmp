#pragma once

#include <string>

class Shape {
private:
	std::string _name;
public:
	Shape(std::string name);
	virtual ~Shape();
	std::string getName() const;
	void setName(const std::string name);
	virtual double area() const = 0;
	virtual double perimeter() const = 0;
};

