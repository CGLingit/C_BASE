/*�ڱ���ʱ�Ķ�̬����
�������get()��Ϊ�麯����������������ȥ1����ʾ1������2��ʾ2��
�����������麯����û�в���ָ��������ã���ô���޷�ʵ�ֶ�̬���ࡣ
*/


#include <iostream>
using namespace std;

class A
{
public:
	virtual int get(){ return 1;}
};

class B : public A
{
public:
	int get(){ return 2;}
};

int main()
{

	while(1)
	{
		A* p;
		cout << "1.���� 2.���� 3. �˳�" ;
		int choice;
		cin >> choice;
		bool quit = false;
		switch (choice)
		{
		case 1:
			p = new A;
			break;
		case 2:
			p = new B;
			break;
		case 3:
			quit = true;
		default:
			cout << "������1��2��3"<<endl;
			break;
		}
		if(quit == true)
		{
			break;
		}
		cout << p->get() <<endl;
	}
	return 0;
}