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
	cout << "原来的num1和num2: ";
	cout << num1 << " " << num2 << endl;
	/*swap1交换了n1和n2的值，但是n1,n2,num1,num2是独立的变量
	  所以，不交换num1和num2的值
	*/
	swap1(num1, num2);
	cout << "swap1的num1和num2: ";
	cout << num1 << " " << num2 << endl;

	/*swap2有两个引用参数，int& n1,int& n2,将num1,num2的引用传给n1,n2,
	即n1，num1互为别名，n2,num2互为别名，实现num1,num2值互换
	*/
	cout << "原来的num1和num2: ";
	cout << num1 << " " << num2 << endl;
	swap2(num1, num2);
	cout << "swap2的num1和num2: ";
	cout << num1 << " " << num2 << endl;

	/*swap3有两个指针参数，p1,p2。将num1,num2的地址传给p1,p2
	，所以p1，&num1指向相同的内存地址，p2,&num2指向相同的内存地址
	函数中交换了*p1,*p2,所以num1和num再次互换。
	*/
	cout << "原来的num1和num2: ";
	cout << num1 << " " << num2 << endl;
	swap3(&num1, &num2);
	cout << "swap3的num1和num2: ";
	cout << num1 << " " << num2 << endl;

	/*swap4有两个通过引用方式传递的指针参数，p1,p2,
	调用后，p1,p2（这里交换的是地址）将被交换*/
	int* p1 = &num1;
	int* p2 = &num2;
	cout << p1 << " " << p2 << endl;
	swap4(p1, p2);
	cout << "swap4的num1和num2: ";
	cout << p1 << " " << p2 << endl;

	return 0;
}