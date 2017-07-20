///*多重继承中的构造函数与析构函数执行的顺序，是按子类继承父类的顺序决定的
//（class f : public e, public d, public a, public c）
//析构顺序与构造顺序相反。
//
//*/
//
//
//#include <iostream>
//using namespace std;
//
//class a
//{
//public:
//	a(){cout << "构造a对象" << endl;}
//	~a(){cout << "析构a对象" << endl;}
//};
//
//class b
//{
//public:
//	b(){cout << "构造b对象" << endl;}
//	~b(){cout << "析构b对象" << endl;}
//};
//
//class c
//{
//public:
//	c(){cout << "构造c对象" << endl;}
//	~c(){cout << "析构c对象" << endl;}
//};
//
//class d
//{
//public:
//	d(){cout << "构造d对象" << endl;}
//	~d(){cout << "析构d对象" << endl;}
//};
//
//class e
//{
//public:
//	e(){cout << "构造e对象" << endl;}
//	~e(){cout << "析构e对象" << endl;}
//};
//
//class f : public e, public d, public a, public c
//{
//
//};
//
//int main()
//{
//	f ab;
//	return 0;
//}