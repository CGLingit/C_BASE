///*�Լ��ö�̬����*/
//#include <iostream>
//using namespace std;
//
//class book
//{
//public:
//	int num;
//	float price;
//	book* next;
//};
//
//book* head = NULL;
//book* create()//���ڽ�����̬����
//{
//	book* p1;//ָ����һ�����
//	book* p2;//ָ�򱾽�һ�����
//	p1 = new book; //�½�һ����㣬Ҳ���ǵ�һ����㣬����p1ָ����
//	head = p1;
//	p2 = p1;//��ʱhead,p1,p2��ָ���һ�����
//	cout << "��������ı��,������0����: ";
//	cin >> p1->num;
//	if(p1->num != 0)
//	{
//		cout << "��������ļ۸�: ";
//		cin >> p1->price;
//	}
//	else
//	{
//		delete p1;
//		p2 = NULL;
//		p2->next = NULL;
//		head =NULL;
//		return head;
//	}
//	while(p1->num != 0)
//	{
//		p2 = p1;
//		p1 = new book;
//		p2->next = p1;
//		cout << "������ͼ����: ";
//		cin >> p1->num;
//		if(p1->num != 0)
//		{
//			cout << "������ͼ��ļ۸�: ";
//			cin >> p1->price;
//		}
//	}
//	delete p1;
//	p2->next = NULL;
//	return head;
//}
//
//void showBook(book *head)
//{
//	cout << "ͼ���������£� " << endl;
//	while(head)
//	{
//		cout << "���: " << head->num << endl;
//		cout << "�۸�: " << head->price <<endl;
//		head = head->next;
//	}
//}
//int main()
//{
//	book* head = NULL;
//	head=create();
//	showBook(head);
//	return 0;
//}