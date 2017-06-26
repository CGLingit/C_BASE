#include "CircleWithStaticDataFileds.h"

int Circle::numberOfObjects = 0;
//�޲ι��캯��
Circle::Circle()
{
	radius = 1;
	numberOfObjects++;
}

//�вι��캯��
Circle::Circle(double newRadius)
{
	radius = newRadius;
	numberOfObjects++;
}

double Circle::getArea()
{
	return radius * radius * 3.14159;
}

double Circle::getRadius()
{
	return radius;
}

void Circle::setRadius(double newRadius)
{
	radius = (newRadius >= 0) ? newRadius : 0;
}

int Circle::getNumberOfObejects()
{
	return numberOfObjects;
}