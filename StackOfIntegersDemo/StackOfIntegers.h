#ifndef STACK_H
#define STACK_H

class StackOfIntegers
{
public:
	StackOfIntegers();//创建一个空栈
	bool isEmpty() const;//如果栈空返回真
	int peek() const;//返回栈顶整数，并不将其从栈中删除
	void push(int value);//将一个整数存到栈顶
	int pop();//删除栈顶整数，并将其值返回
	int getSize() const;//返回栈中整数的个数

private:
	int elements[100];//用于保存栈中整数的数组
	int size;//栈中整数的个数
};

#endif