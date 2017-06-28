#include <iostream>
using namespace std;

//swap two variables using pass-by-value
void swap1(int n1, int n2)
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
}

//swap two variables using pass-by-reference
void swap2(int& n1, int& n2)
{
    int temp = n1;
	n1 = n2;
	n2 = temp;
}

//Pass two pointers by value
void swap3(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

//Pass two pointer by reference
void swap4(int* &p1, int* &p2)
{
	int* temp = p1;
	p1 = p2;
	p2 = temp;
}


int main()
{
	//Declare and initialize variables
	int num1 = 1;
	int num2 = 2;
	cout << "ԭ����num1��num2: ";
	cout << num1 << " " << num2 << endl;
	/*swap1������n1��n2��ֵ������n1,n2,num1,num2�Ƕ����ı���
	  ���ԣ�������num1��num2��ֵ
	*/
	swap1(num1, num2);
	cout << "swap1��num1��num2: ";
	cout << num1 << " " << num2 << endl;

	/*swap2���������ò�����int& n1,int& n2,��num1,num2�����ô���n1,n2,
	��n1��num1��Ϊ������n2,num2��Ϊ������ʵ��num1,num2ֵ����
	*/
	cout << "ԭ����num1��num2: ";
	cout << num1 << " " << num2 << endl;
	swap2(num1, num2);
	cout << "swap2��num1��num2: ";
	cout << num1 << " " << num2 << endl;

	/*swap3������ָ�������p1,p2����num1,num2�ĵ�ַ����p1,p2
	������p1��&num1ָ����ͬ���ڴ��ַ��p2,&num2ָ����ͬ���ڴ��ַ
	�����н�����*p1,*p2,����num1��num�ٴλ�����
	*/
	cout << "ԭ����num1��num2: ";
	cout << num1 << " " << num2 << endl;
	swap3(&num1, &num2);
	cout << "swap3��num1��num2: ";
	cout << num1 << " " << num2 << endl;

	/*swap4������ͨ�����÷�ʽ���ݵ�ָ�������p1,p2,
	���ú�p1,p2�����ｻ�����ǵ�ַ����������*/
	int* p1 = &num1;
	int* p2 = &num2;
	cout << p1 << " " << p2 << endl;
	swap4(p1, p2);
	cout << "swap4��num1��num2: ";
	cout << p1 << " " << p2 << endl;

	return 0;
}