///*�����������ض��ֵ*/
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
//	cout << "��������Ϊ�뾶�ͱ߳���a��ֵ: ";
//	cin >> a;
//	check = func(a, b, c);
//	if(check)
//	{
//		cout << "�������㷶Χ��" << endl;
//	}
//	else
//	{
//		cout << "Բ�����: " << b << "�����ε����: " << c << endl;
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