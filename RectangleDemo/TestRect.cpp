#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	Rectangle Rect1(4, 40);
	
	Rectangle Rect2(3.5, 35.9);

	cout << "长方形1的面积为： " << Rect1.getArea() << "周长为： " << Rect1.getPerimeter() << endl;
	cout << "长方形2的面积为： " << Rect2.getArea() << "周长为： " << Rect2.getPerimeter() << endl;

	return 0;


}