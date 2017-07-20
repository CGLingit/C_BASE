///*将数组传递给函数*/
//
//#include <iostream>
//using namespace std;
//float average(int *, int);
//int main()
//{
//	int a[100];
//	int num = 100;
//	float Average;
//	for (int i = 0; i < 100; i++)
//	{
//		a[i]=num;
//		num++;
//		cout << a[i] << endl;
//	}
//	Average = average(a, 100);
//	cout << "100-199间的平均值为： " << Average << endl;
//	return 0;
//}
//
//float average(int* p, int total)
//{
//	int sum = 0;
//	float b;
//	for (int i = 0; i < total; i++)
//	{
//		sum += p[i];
//	}
//	b=(float)sum/total;
//	return b;
//}