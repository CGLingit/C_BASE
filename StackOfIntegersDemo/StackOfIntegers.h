#ifndef STACK_H
#define STACK_H

class StackOfIntegers
{
public:
	StackOfIntegers();//����һ����ջ
	bool isEmpty() const;//���ջ�շ�����
	int peek() const;//����ջ�����������������ջ��ɾ��
	void push(int value);//��һ�������浽ջ��
	int pop();//ɾ��ջ��������������ֵ����
	int getSize() const;//����ջ�������ĸ���

private:
	int elements[100];//���ڱ���ջ������������
	int size;//ջ�������ĸ���
};

#endif