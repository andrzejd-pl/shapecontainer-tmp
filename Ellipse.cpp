#include "Ellipse.h"
#define _USE_MATH_DEFINES
#include <math.h>

double Ellipse::area() const {
	return M_PI*_semi_major*_semi_minor;
}

double Ellipse::perimeter() const {
	return M_PI*((3 / 2)*(_semi_major + _semi_minor) - sqrt(_semi_major*_semi_minor));
}