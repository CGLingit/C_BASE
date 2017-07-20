/*在编译时的动态联编
将基类的get()设为虚函数，则输出结果中输去1，显示1，输入2显示2；
假如我们在虚函数中没有采用指针或者引用，那么就无法实现动态联编。
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
		cout << "1.父类 2.子类 3. 退出" ;
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
			cout << "请输入1，2或3"<<endl;
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