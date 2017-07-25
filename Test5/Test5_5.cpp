/*函数指针*/

#include <iostream>
#include <string>
using namespace std;

double triangle(float& w, float& h)
{
	return w * h * 0.5;
}

float rectangle(float& w, float& h)
{
	return w * h;
}

void print(float& w, float& h)
{
	cout << "长为：" << w << "  " << "高为： " << h <<endl;
}

void swap(float& w, float& h)
{
	float n;
	n = w;
	w = h;
	h= n ;
}

bool check(string str)
{
	for(int i = 0;i < 10; i++)
	{
		if((str[i] > '9' || str[i] < '0') && (str[i] != '.'))
		{
			return false;
		}
	}
	return true;
}
void get(float& w, float& h)
{
	cout << "请输入w的新值：";
	string str1;
	cin >> str1;
	while(!check(str1))
	{
		cout << "请输入数字，请重新输入！！" << endl;
		cin >> str1;
	}
	w = atof(str1.c_str());

	cout << "请输入w的新值：";
	string str2;
	cin >> str2;
	while(!check(str2))
	{
		cout << "请输入数字，请重新输入！！" << endl;
		cin >> str2;
	}
	h = atof(str2.c_str());
}

int main()
{
	bool quit = false;
	float a = 2, b = 3;
	int choice;
	while(quit == false)
	{
		cout << "0.退出 1.设定长宽 2.三角形 3.长方形 4.交换长和宽" << endl;	
		cin >> choice;
		switch(choice)
		{
		case 1:
			cout << "设定前的长和宽的值：";
			print(a, b);
			get(a, b);
			cout << "设定前的长和宽的值：";
			print(a, b);
			break;
		case 2: print(a, b);
			cout << "三角形的面积为：" << triangle(a, b) << endl;
			break;
		case 3:
			print(a, b);
			cout << "长方形的面积为：" << rectangle(a, b) << endl;
			break;
		case 4:
			cout << "交换前长和宽的值：";
			print(a, b);
			swap(a, b);
			cout << "交换前长和宽的值：";
			print(a, b);
			break;
		default:
			quit = true;
			break;
		}
	}
	return 0;
}