#pragma once
#include "Funkcja.h"
class FunkcjaLiniowa :	public Funkcja {
public:
	double _a, _b;
public:
	FunkcjaLiniowa(double a, double b) :Funkcja(), _a(a), _b(b) {}
	virtual ~FunkcjaLiniowa() {}

	virtual double oblicz(double x) const;
};

