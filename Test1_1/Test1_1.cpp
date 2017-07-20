///*
//采用(引用符&)别名方式传递参数
//
//*/
//#include <iostream>
//using namespace std;
//
//void swap(int &a, int &b)
//{
//	int c;
//	cout << "swap交换前的a: " << a << "b: " << b << endl;
//	c = a;
//	a = b;
//	b = c;
//	cout << "swap交换后的a: " << a << "b: " << b << endl;
//}
//
//
//int main()
//{
//	int a = 3;
//	int &d = a;
//    int b = 4;
//	cout << "主程序中交换前的a: " << a << "b: " << b << endl;
//	swap(a, b);
//	cout << "主程序中交换后的a: " << a << "b: " << b << endl;
//
//	cout << d;
//	return 0;
//}