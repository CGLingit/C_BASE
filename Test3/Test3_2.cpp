///*������̬����*/
//
//#include <iostream>
//using namespace std;
//
//class book
//{
//public:
//	int num;
//	int price;
//	book* next;//ָ����һ���ڵ��ָ��
//};
//book* head = NULL;//ͷָ��
//book* creat()//����һ������book��ָ���creat()����,���ڴ�����̬����
//{
//	book* p1;//��Ϊ��һ������ָ��
//	book* p2;//��Ϊ���ڵ��ָ��
//	p1 = new book;//���������½�һ����㣬��p1��ָ��������
//	head = p1;//���Ѹý����Ϊͷ��㣬��ͷָ��head��ָ����
//	p2 = p1;//��ʱ3��ָ�붼ָ����ͬһ�����
//	cout << "������ͼ��ı�ţ���0����" << endl;
//	cin >> p1->num;
//	if(p1->num != 0)
//	{
//		cout << "������ͼ��ļ۸�" << endl;
//		cin >> p1->price;
//	}
//	else
//	{
//		delete p1;
//		p2 = NULL;
//		p2->next = NULL;
//		head = NULL;
//		return head;//��ʱ״̬����δִ���κβ�����״̬
//	}
//	while(p1->num != 0)
//	{
//		p2 = p1;//p2������p1�ĵ�ַ��Ҳ�����ϴδ������ɹ���λ��
//		p1 = new book;//p1ָ���½��Ľ�㣬��p2ָ����ǾɵĽ��
//		cout << "������ͼ��ı�ţ���0����" << endl;
//		cin >> p1->num;
//		if(p1->num != 0)
//		{
//			cout << "������ͼ��ļ۸�" << endl;
//			cin >> p1->price;
//		}
//		p2->next = p1;
//	}
//	delete p1;
//	p2->next = NULL;
//	return head;
//}
//void showbook(book*head)//����Ϊָ��book��ָ��
//{
//	cout << endl;
//	cout << "ͼ����Ϣ����: " << endl;
//	while(head)
//	{
//		cout << "ͼ����: " << head->num << "\t";
//		cout << "ͼ��۸�: " << head->price << endl;
//		head = head->next;
//	}
//}
//int main()
//{
//	book* head = NULL;
//	head = creat();
//	showbook(head);
//	return 0;
//}