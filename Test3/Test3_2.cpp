///*建立动态链表*/
//
//#include <iostream>
//using namespace std;
//
//class book
//{
//public:
//	int num;
//	int price;
//	book* next;//指向下一个节点的指针
//};
//book* head = NULL;//头指针
//book* creat()//建立一个返回book类指针的creat()函数,用于创建动态链表。
//{
//	book* p1;//作为下一个结点的指针
//	book* p2;//作为本节点的指针
//	p1 = new book;//首先我们新建一个结点，用p1来指向这个结点
//	head = p1;//并把该结点作为头结点，由头指针head来指向它
//	p2 = p1;//此时3个指针都指向了同一个结点
//	cout << "请输入图书的编号，以0结束" << endl;
//	cin >> p1->num;
//	if(p1->num != 0)
//	{
//		cout << "请输入图书的价格" << endl;
//		cin >> p1->price;
//	}
//	else
//	{
//		delete p1;
//		p2 = NULL;
//		p2->next = NULL;
//		head = NULL;
//		return head;//此时状态就是未执行任何操作的状态
//	}
//	while(p1->num != 0)
//	{
//		p2 = p1;//p2来保存p1的地址，也就是上次创建结点成功的位置
//		p1 = new book;//p1指向新建的结点，则p2指向的是旧的结点
//		cout << "请输入图书的编号，以0结束" << endl;
//		cin >> p1->num;
//		if(p1->num != 0)
//		{
//			cout << "请输入图书的价格" << endl;
//			cin >> p1->price;
//		}
//		p2->next = p1;
//	}
//	delete p1;
//	p2->next = NULL;
//	return head;
//}
//void showbook(book*head)//参数为指向book类指针
//{
//	cout << endl;
//	cout << "图书信息如下: " << endl;
//	while(head)
//	{
//		cout << "图书编号: " << head->num << "\t";
//		cout << "图书价格: " << head->price << endl;
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