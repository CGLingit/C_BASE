/*
 ģ������ϰ������ʵ�־���ͨ�����͵���

 Ҫ��������ǰ����ģ��ǰ׺��Generictack.h��4�У�
 ģ�溯��ǰҲҪ��ģ��ǰ׺template<typename T>
 ע�⣬��������ͷ�::ǰ��������Stack<T>,������Stack;

*/


#include <iostream>
#include "Generictack.h"
#include <string>
using namespace std;

int main()
{
	Stack<int> intStack;//����һ��ģ�������
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