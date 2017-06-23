#include "Rectangle.h"
#include <cmath>
using namespace std;

Rectangle::Rectangle()
{
	Width = 1;
	Height = 1;
}

Rectangle::Rectangle(double width, double height)
{
	Width = width;
	Height = height;
}

double Rectangle::getWidth()
{
	return Width;
}

double Rectangle::getHeight()
{
	return Height;
}

void Rectangle::setWidth(double width)
{
	Width = width;
}

void Rectangle::setHeight(double height)
{
	Height = height;
}

double Rectangle::getArea()
{
	return Width * Height;
}

double Rectangle::getPerimeter()
{
	return (Width + Height) * 2;
}