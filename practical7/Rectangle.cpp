// Question 1 .cpp File

#include "stdafx.h"
#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle() {
	width = 5;
	height = 10;
}

Rectangle::Rectangle(double w, double h) {
	width = w;
	height = h;
}

double Rectangle::get_area() const {
	return (width * height);
}

double Rectangle::get_perimeter() const {
	return 2 * (width + height);
}

void Rectangle::resize(double factor) {
	width *= factor;
	height *= factor;
}