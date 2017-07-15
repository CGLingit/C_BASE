#ifndef RECTANGLE_H
#define RECTANGLE_H
#include<string>
#include "GeometricObject.h"

class Rectangle: public GeometricObject
{
public:
	Rectangle();
	Rectangle(double width, double height);
	Rectangle(double width, double height, string& color, bool filled);
	void setHeight(double);
	double getHeight() const;
	void setWidth(double);
	double getWidth() const;
	double getArea() const;
	double getPerimeter() const;
	string toString() const;

private:
	double width;
	double height;
};
#endif