#include <iostream>
#include "Rectangle.h"
using namespace std;

int main()
{
	Rectangle Rect1(4, 40);
	
	Rectangle Rect2(3.5, 35.9);

	cout << "������1�����Ϊ�� " << Rect1.getArea() << "�ܳ�Ϊ�� " << Rect1.getPerimeter() << endl;
	cout << "������2�����Ϊ�� " << Rect2.getArea() << "�ܳ�Ϊ�� " << Rect2.getPerimeter() << endl;

	return 0;


}