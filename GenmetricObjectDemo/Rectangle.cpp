#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle()
{
	width = 1;
	height = 1;
}

Rectangle::Rectangle(double width, double height)
{
	setWidth(width);
	setHeight(height);
}

Rectangle::Rectangle(double width, double height, string& color, bool filled)
{
	setWidth(width);
	setHeight(height);
	setColor(color);
	setFilled(filled);
}

void Rectangle::setWidth(double width)
{
	this->width = (width >= 0) ? width : 0;
}

double Rectangle::getWidth() const
{
	return width;
}

void Rectangle::setHeight(double height)
{
	this->height = (height >= 0) ? height : 0;
}

double Rectangle::getHeight() const
{
	return height;
}

double Rectangle::getArea() const
{
	return height * width;
}

double Rectangle::getPerimeter() const
{
	return (width + height) * 2;
}

string Rectangle::toString() const
{
	return "Rectangle object";
}