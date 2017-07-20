/*如果基类的print函数未被说明为虚函数，则函数采用静态联编，
即不对重载的各个对象是函数进行追踪，这导致C++编译器在编译时
认定的指向基类的三个指针p,p1,p2,在运行时也不会根据对象的改变而改变
因此就算是将三个对象的内存地址依次赋给了三个指针，三个指针还是默认
指向基类



将print函数设为虚函数，则为动态联编。
*/
//#include <iostream>
//using namespace std;
//
//class A
//{
//public:
//	virtual void print(){ cout << "a" << endl;}
//	//void print(){ cout << "a" << endl;}
//};
//
//class B : public A
//{
//	public:
//	void print(){ cout << "b" << endl;}
//};
//
//class C : public A
//{
//	public:
//	void print(){ cout << "c" << endl;}
//};
//
//int main()
//{
//	A a;B b; C c;
//	A* p = &a;
//	A* p1 = &b;
//	A* p2 = &c;
//
//	p->print();
//	p1->print();
//	p2->print();
//	return 0;
//}