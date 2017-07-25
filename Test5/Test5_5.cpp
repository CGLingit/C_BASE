/*����ָ��*/

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
	cout << "��Ϊ��" << w << "  " << "��Ϊ�� " << h <<endl;
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
	cout << "������w����ֵ��";
	string str1;
	cin >> str1;
	while(!check(str1))
	{
		cout << "���������֣����������룡��" << endl;
		cin >> str1;
	}
	w = atof(str1.c_str());

	cout << "������w����ֵ��";
	string str2;
	cin >> str2;
	while(!check(str2))
	{
		cout << "���������֣����������룡��" << endl;
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
		cout << "0.�˳� 1.�趨���� 2.������ 3.������ 4.�������Ϳ�" << endl;	
		cin >> choice;
		switch(choice)
		{
		case 1:
			cout << "�趨ǰ�ĳ��Ϳ��ֵ��";
			print(a, b);
			get(a, b);
			cout << "�趨ǰ�ĳ��Ϳ��ֵ��";
			print(a, b);
			break;
		case 2: print(a, b);
			cout << "�����ε����Ϊ��" << triangle(a, b) << endl;
			break;
		case 3:
			print(a, b);
			cout << "�����ε����Ϊ��" << rectangle(a, b) << endl;
			break;
		case 4:
			cout << "����ǰ���Ϳ��ֵ��";
			print(a, b);
			swap(a, b);
			cout << "����ǰ���Ϳ��ֵ��";
			print(a, b);
			break;
		default:
			quit = true;
			break;
		}
	}
	return 0;
}