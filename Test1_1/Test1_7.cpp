/*
��Ϊjump()ǰ���йؼ���virtual����ʾ�ú����Ƕ�����̬��
���������Ա����������ӵ�У����ҹ��ܲ�һ�����仰˵��������ڵ���ͬһ���ֵĺ���ʱ
������Ч��Ҳ��һ������ôϵͳ��ִ�е�virtualʱ���Զ��ж����ĸ��������������
Ȼ����øö����ͬ��������
*/

//#include <iostream>
//using namespace std;
//
//class Father
//{
//public:
//	virtual void jump() const {cout << "���׿�����5��̨��" << endl;}
//    //void jump() const {cout << "���׿�����5��̨��" << endl;}
//
//	void run() const {cout << "���׿�����1����" << endl;}
//
//};
//
//class Son : public Father
//{
//public:
//	void jump() const {cout << "���������10��̨��" << endl;}
//	void run() const {cout << "���������10����" << endl;}
//};
//
//int main()
//{
//	Father* p = new Son;
//	p->jump();
//	p->run();
//	delete p;
//	return 0;
//}