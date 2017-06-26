#include "CircleWithStaticDataFileds.h"

int Circle::numberOfObjects = 0;
//无参构造函数
Circle::Circle()
{
	radius = 1;
	numberOfObjects++;
}

//有参构造函数
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