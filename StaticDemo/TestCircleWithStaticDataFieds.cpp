#include <iostream>
#include "CircleWithStaticDataFileds.h"
using namespace std;
int main()
{
	cout << "number of circle objects created: "
		<< Circle::getNumberOfObejects() << endl;

	Circle circle1;
	cout << "The area of the circle of radius "
		<< circle1.getRadius() << "is " << circle1.getArea() <<endl;
	cout << "number of circle objects created: "
		<< Circle::getNumberOfObejects() << endl;

	Circle circle2(5.0);
	cout << "The area of the circle of radius "
		<< circle2.getRadius() << "is " << circle2.getArea() <<endl;
	cout << "number of circle objects created: "
		<< Circle::getNumberOfObejects() << endl;

	circle1.setRadius(3.3);
	cout << "The area of the circle of radius "
		<< circle1.getRadius() << "is " << circle1.getArea() <<endl;

	cout << "circle1.getNumberOfObject() returns "
		<< circle1.getNumberOfObejects() << endl;

	cout << "circle2.getNumberOfObject() returns "
		<< circle2.getNumberOfObejects() << endl;
	return 0;
}