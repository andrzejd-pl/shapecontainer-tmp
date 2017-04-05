#pragma once
class Funkcja {
private:
	double _x;
public:
	Funkcja();
	virtual ~Funkcja();

	void setX(double x);
	double getX() const;
	virtual double oblicz(double x) const = 0;
};