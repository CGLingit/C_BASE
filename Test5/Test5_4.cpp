///*��̬��Ա�ļ�Ӧ��*/
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
//	cout << "����ܼ�Ϊ��";;
//	cout << Aspl::showPrice() << endl;
//	int i = 0;
//
//	cout << "�������" << i << "�ι����İ�˾ƥ�ֵĵ���۸�";
//	cin >> f;
//	Aspl* p[5];//����5�������
//	p[i] = new Aspl(f);
//	cout << "����ܼ�Ϊ��";;
//	cout << Aspl::showPrice() << endl;
//
//	i++;
//	cout << "�������" << i << "�ι����İ�˾ƥ�ֵĵ���۸�";
//	cin >> f;
//	p[i] = new Aspl(f);
//	cout << "����ܼ�Ϊ��";;
//	cout << Aspl::showPrice() << endl;
//
//	cout << "������Ҫɾ���Ĺ��������ı�ţ�";
//	cin >> i;
//	delete p[i];
//	cout << "����ܼ�Ϊ��";;
//	cout << Aspl::showPrice() << endl;
//	return 0;
//}