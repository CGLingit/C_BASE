///*单一继承*/
//
//#include <iostream>
//using namespace std;
//
//class Father
//{
//private:
//	int Height;
//	int Weight;
//public:
//	void setWeight(int weight)
//	{
//		Weight = weight;
//	}
//	void setHeight(int height)
//	{
//		Height = height;
//	}
//	void print()
//	{
//		cout << "身高: " << Height << "\t" << "体重: " << Weight << endl;
//	}
//};
//
//class Son : public Father
//{
//private:
//	int Long;
//public:
//	void setLong(int long1)
//	{
//		Long = long1;
//	}
//	void printLong()
//	{
//		cout << "臂长: " << Long << endl;
//	}
//};
//
//int main()
//{
//	Son son1;
//	son1.setHeight(180);
//	son1.setWeight(130);
//	son1.setLong(170);
//
//	son1.print();
//	son1.printLong();
//	return 0;
//}