#include <iostream>
#include <math.h>
#include <conio.h>

#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"
#include "Ellipse.h"
#include "ShapeContainer.h"
#include "Funkcja.h"
#include "FunkcjaLiniowa.h"

void zadanie1();
void zadanie2();
void zadanie3();

double bisekcja(Funkcja* f, double p, double k, double d);

int main() {

	//zadanie1();
	zadanie2();
	//zadanie3();

	getch();

	return 0;
}

void zadanie1() {
	Rectangle rec("prostokat", 10, 5);
	Square sq("kwadrat", 5);
	std::cout << "Pole kwadratu: " << sq.area() << std::endl;
	std::cout << "Pole prostokata: " << rec.area() << std::endl;

	Rectangle &sq2 = sq;
	Shape &sq3 = sq;

	Shape &rec2 = rec;

	std::cout << "&sq2.area() = " << sq2.area() << std::endl;
	std::cout << "&sq3.area() = " << sq3.area() << std::endl;
	std::cout << "&rec2.area() = " << rec2.area() << std::endl;

	/*
	Przy rzutowaniu na referencjê, bez u¿ycia metody wirtualnej funkcja area jest wykonywana dla danej klasy,
	natomiast przy u¿yciu metody wirtualnej funkcja jest wykonywana dla w³aœciwej klasy.
	*/
}

void zadanie2() {
	ShapeContainer sc = ShapeContainer();

	
	auto rc = Rectangle("prostokat", 5, 10);
	/*Square sq = Square("kwadrat", 5);
	Circle cl = Circle("kolo", 6);
	Ellipse el = Ellipse("elipsa", 8, 9);
	*/
	//sc.addShape(rc);
	/*sc.addShape(sq);
	sc.addShape(cl);
	sc.addShape(el);
	*/
	sc.printAreas();

	sc.printName();

	sc.printPerimeters();
}

void zadanie3() {
	FunkcjaLiniowa f_x(2, 2);

	std::cout << bisekcja(&f_x, -5, 5, 0.000001);
}

double bisekcja(Funkcja* f, double p, double k, double d) {
	if (f->oblicz((p + k) / 2) == 0)
		return (p + k) / 2;
	while (abs(p-k) > d) {
		if ((f->oblicz((p + k) / 2)*f->oblicz(p)) < 0)
			k = (p + k) / 2;
		else if ((f->oblicz((p + k) / 2)*f->oblicz(k) < 0))
			p = (p + k) / 2;
	}
	return (p + k) / 2;
}