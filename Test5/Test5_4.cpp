///*静态成员的简单应用*/
//
//#include <iostream>
//using namespace std;
//
//class Aspl
//{
//public:
//	Aspl(int p){price = p; TotalPrice += price;}
//	static int showPrice(){return TotalPrice;}
//	~Aspl(){TotalPrice -= price;}
//
//private:
//	int price;
//	int static TotalPrice;
//};
//int Aspl::TotalPrice = 0;
//int main()
//{
//	int f;
//	
//	cout << "库存总价为：";;
//	cout << Aspl::showPrice() << endl;
//	int i = 0;
//
//	cout << "请输入第" << i << "次购进的阿司匹林的单箱价格：";
//	cin >> f;
//	Aspl* p[5];//定义5个类对象
//	p[i] = new Aspl(f);
//	cout << "库存总价为：";;
//	cout << Aspl::showPrice() << endl;
//
//	i++;
//	cout << "请输入第" << i << "次购进的阿司匹林的单箱价格：";
//	cin >> f;
//	p[i] = new Aspl(f);
//	cout << "库存总价为：";;
//	cout << Aspl::showPrice() << endl;
//
//	cout << "请输入要删除的购进次数的编号：";
//	cin >> i;
//	delete p[i];
//	cout << "库存总价为：";;
//	cout << Aspl::showPrice() << endl;
//	return 0;
//}