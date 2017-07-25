/*
第一、静态成员变量是属于整个类的全局变量，它不单属于某个对象
普通成员变量是属于类中对象的变量，它不能被所有对象共享。

第二、静态成员变量必须在全局中定义，而成员变量由于是属于该类
某个对象的，而不是属于整个类的，因此不用在全局中定义。

第三、在使用静态成员变量时，可以不限定为某个具体的对象，只与
类名连用即可。如A::total。
       而不用  A a;
	           a.total
第四，静态成员变量在对象建立前已经存在。
*/



//#include <iostream>
//using namespace std;
//
//class A
//{
//public:
//	A(int num){it = num; total++;}
//	static int total;
//	~A(){total--;}
//	int get(){return it;}
//	void set(int age){it = age;}
//private:
//	int it;
//};
//int A::total = 0;//为静态成员变量分配了内存空间
//
//int main()
//{
//	const int max = 5;
//	int i;
//	A* a[max];
//	for (i = 0; i < max; i++)
//	{
//		a[i] = new A(i);
//	}
//	for (i = 0; i < max; i++)
//	{
//		cout << "该类有" << A::total << "个对象.\n";
//		cout << "正在删除第" << a[i]->get() << "个对象。\n";
//	}
//	return 0;
//}