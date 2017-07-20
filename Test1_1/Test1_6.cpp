///*向基类传递参数
//Son(string a, int i, int j) : Father(a, i)
//我们在子类的构造函数中明确地指定要调用父类的带两个参数的构造函数。
//同时将子类构造函数中前2个参数的值传递给父类的带两个参数的构造函数。
//这样就可以通过父类的带两个参数的构造函数完成对父类两个成员的赋值。
//*/
//
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Father
//{
//public:
//	Father() { cout << "构造父类对象" << endl;}
//	Father(string a, int i){ name = a; height = i; cout << "构造带两个参数的父类对象" << endl;}
//	~Father(){ cout << "析构父类对象" << endl;}
//	void print(){cout << name << "身高为： " << height << endl;}
//protected:
//	string name;
//	int height;
//};
//
//class Son : public Father
//{
//public:
//	Son(string a, int i, int j) : Father(a, i){ weight = j; cout << "构造子类对象" << endl;}
//	~Son(){ cout << "析构子类对象" << endl;}
//
//	void print1(){print();cout << "体重为：" << weight << endl;}
//
//protected:
//	int weight;
//};
//
//int main()
//{
//	Son son1("mike", 180, 150);
//	son1.print1();
//	cout << "程序结束！" << endl;
//
//	return 0;
//}