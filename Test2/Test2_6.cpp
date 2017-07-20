#include <iostream>
using namespace std;
int func(int, int [], int);
int main()
{
	int size;
	int w;
	int a[] = {4,5,6,2,1,8,9};
	size = sizeof(a)/sizeof(int);
	int data;
	cout << "请输入查找的数据: ";
	cin >> data;
	w = func(data, a, size);
	cout << data << "在第" << w << "个位置" << endl;

	return 0;
}

int func(int data, int a[], int n)
{
	for (int i = 0; i < n; i ++)
	{
		if(a[i] == data)
		{
			return i+1;
		}
	}
}