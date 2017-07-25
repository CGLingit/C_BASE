///*自己敲动态链表*/
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
//book* create()//用于建立动态链表
//{
//	book* p1;//指向下一个结点
//	book* p2;//指向本节一个结点
//	p1 = new book; //新建一个结点，也就是第一个结点，并用p1指向它
//	head = p1;
//	p2 = p1;//此时head,p1,p2均指向第一个结点
//	cout << "请输入书的编号,以输入0结束: ";
//	cin >> p1->num;
//	if(p1->num != 0)
//	{
//		cout << "请输入书的价格: ";
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
//		cout << "请输入图书编号: ";
//		cin >> p1->num;
//		if(p1->num != 0)
//		{
//			cout << "请输入图书的价格: ";
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
//	cout << "图书数据如下： " << endl;
//	while(head)
//	{
//		cout << "编号: " << head->num << endl;
//		cout << "价格: " << head->price <<endl;
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