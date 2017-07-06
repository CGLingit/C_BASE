/*
 模版类练习，可以实现具有通用类型的类

 要在类声明前加上模版前缀（Generictack.h的4行）
 模版函数前也要加模版前缀template<typename T>
 注意，作用域解释符::前的类名是Stack<T>,而不是Stack;

*/


#include <iostream>
#include "Generictack.h"
#include <string>
using namespace std;

int main()
{
	Stack<int> intStack;//声明一个模版类对象
	for(int i = 0; i < 10; i++)
	{
		intStack.push(i);

		while(!intStack.empty())
			cout << intStack.pop() << " " << endl;
	}

	Stack<string> stringStack;
	stringStack.push("Chicago");
	stringStack.push("Hoston");

	while(!stringStack.empty())
			cout << stringStack.pop() << " " << endl;
	return 0;
}