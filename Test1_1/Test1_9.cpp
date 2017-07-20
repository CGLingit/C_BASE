/*在运行时的静态联编
输入1，2时都返回1，因为在编译时指针p指向类A,然后在运行时他们的关系
已经确定好的，无法改变*/


//#include <iostream>
//using namespace std;
//
//class A
//{
//public:
//	int get(){ return 1;}
//};
//
//class B : public A
//{
//public:
//	int get(){ return 2;}
//};
//
//int main()
//{
//
//	while(1)
//	{
//		A* p;
//		cout << "1.父类 2.子类 3. 退出" ;
//		int choice;
//		cin >> choice;
//		bool quit = false;
//		switch (choice)
//		{
//		case 1:
//			p = new A;
//			break;
//		case 2:
//			p = new B;
//			break;
//		case 3:
//			quit = true;
//		default:
//			cout << "请输入1，2或3"<<endl;
//			break;
//		}
//		if(quit == true)
//		{
//			break;
//		}
//		cout << p->get() <<endl;
//	}
//	return 0;
//}