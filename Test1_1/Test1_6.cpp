///*����ഫ�ݲ���
//Son(string a, int i, int j) : Father(a, i)
//����������Ĺ��캯������ȷ��ָ��Ҫ���ø���Ĵ����������Ĺ��캯����
//ͬʱ�����๹�캯����ǰ2��������ֵ���ݸ�����Ĵ����������Ĺ��캯����
//�����Ϳ���ͨ������Ĵ����������Ĺ��캯����ɶԸ���������Ա�ĸ�ֵ��
//*/
//
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Father
//{
//public:
//	Father() { cout << "���츸�����" << endl;}
//	Father(string a, int i){ name = a; height = i; cout << "��������������ĸ������" << endl;}
//	~Father(){ cout << "�����������" << endl;}
//	void print(){cout << name << "���Ϊ�� " << height << endl;}
//protected:
//	string name;
//	int height;
//};
//
//class Son : public Father
//{
//public:
//	Son(string a, int i, int j) : Father(a, i){ weight = j; cout << "�����������" << endl;}
//	~Son(){ cout << "�����������" << endl;}
//
//	void print1(){print();cout << "����Ϊ��" << weight << endl;}
//
//protected:
//	int weight;
//};
//
//int main()
//{
//	Son son1("mike", 180, 150);
//	son1.print1();
//	cout << "���������" << endl;
//
//	return 0;
//}