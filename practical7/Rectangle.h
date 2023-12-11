// Question 1 Header File

#pragma once
class Rectangle
{
public:
	Rectangle();
	Rectangle(double w, double h);
	double get_perimeter() const;
	double get_area() const;
	void resize(double factor);

private:
	double width;
	double height;
};