/*
1.在传递对象时，应该总使用按引用传递的方式。如果在函数中对象不会被改变，
  应该把它定义成一个const引用函数
2.如果一个成员函数不改变对象的数据域，则定义该函数为const函数（只读函数）
*/
#include <iostream>
#include "BMI.h"
using namespace std;

BMI::BMI(const string& newName, int newAge,
		double newWeight, double newHeight)
{
	name = newName;
	age = newAge;
	weight = newWeight;
	height = newHeight;
}

BMI::BMI(const string& newName, double newWeight, double newHeight)
{
	name = newName;
	age = 20;
	weight = newWeight;
	height = newHeight;
}

double BMI::getBMI() const
{
	const double K = 0.45;
	const double M = 0.0254;
	double bmi = weight * K / ((height * M) * (height * M));
	return bmi;
}

string BMI::getStatus() const
{
	double bmi = getBMI();
	if (bmi < 18.5) 
		return "Underweight";
	else if (bmi < 25)
		return "Normal";
	else if (bmi < 30)
		return "Overweight";
	else
		return "Obase";
}

string BMI::getName() const
{
	return name;
}

int BMI::getAge() const
{
	return age;
}

double BMI::getWeight() const
{
	return weight;
}

double BMI::getHeight() const
{
	return height;
}