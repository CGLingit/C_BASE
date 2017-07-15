#include <iostream>
#include "DerivedCircle.h"
#include "GeometricObject.h"
#include "Rectangle.h"
using namespace std;

int main()
{
	GeometricObject shape;
	shape.setColor("red");
	shape.setFilled(true);
	cout << shape.toString() <<endl
		<< " Color: " << shape.getColor()
		<< " Filled: " << (shape.isFilled() ? "true" : "false" )<< endl;

	Circle circle(5);
	circle.setColor("yellow");
	circle.setFilled(false);
	cout << circle.toString() <<endl
		<< " Color: " << circle.getColor()
		<< " Filled: " << (circle.isFilled() ? "true" : "false" )
		<< " Radius: " << circle.getRadius() 
		<< " Area: " << circle.getArea()
		<< " Perimeter: " << circle.getPerimeter() << endl;

	Rectangle rect(2, 3);
	rect.setColor("black");
	rect.setFilled(true);
	cout << rect.toString() <<endl
		<< " Color: " << rect.getColor()
		<< " Filled: " << (rect.isFilled() ? "true" : "false" )
		<< " Width: " << rect.getWidth() 
		<< " Height: " << rect.getHeight()
		<< " Area: " << rect.getArea()
		<< " Perimeter: " << rect.getPerimeter() << endl;


	return 0;
}