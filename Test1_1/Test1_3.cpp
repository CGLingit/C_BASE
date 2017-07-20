///*用引用来返回多个值*/
//
//#include <iostream>
//using namespace std;
//
//int func(int a, int& b, int& c);
//
//int main()
//{
//	int a, b, c;
//	int check;
//	cout << "请输入作为半径和边长的a的值: ";
//	cin >> a;
//	check = func(a, b, c);
//	if(check)
//	{
//		cout << "超出计算范围。" << endl;
//	}
//	else
//	{
//		cout << "圆的面积: " << b << "正方形的面积: " << c << endl;
//	}
//	return 0;
//}
//
//int func(int a, int& b, int& c)
//{
//	if(a > 20000)
//	{
//		a = 1;
//	}
//	else
//	{
//		b = a * a * 3.14;
//		c = a * a;
//		a = 0;
//	}
//
//	return a;
//}