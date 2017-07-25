/*自己敲动态链表*2*/

#include <iostream>
using namespace std;

class Book
{
public:
	int num;//书编号
	float price;//书价格
	Book* next;//指向下个结点的指针
};

Book* head = NULL;//定义头指针为空

Book* create() //用于创建动态列表
{
	Book* p1;//指向下个结点的指针
	Book* p2;//指向当前结点的指针
	p1 = new Book;//创建第一个结点，并用p1指向它
	head = p1;
	p2 = p1;//此时head,p1,p2三个指针都指向第一个结点

	cout<< "请输入书的编号: ";
	cin >> p1->num;
	if(p1->num != 0)
	{
		cout << "请输入书的价格: ";
		cin >> p1->price;
	}
	else                    //当输入为0时，一切回到无任何操作的状态
	{
		delete p1;
		p2 = NULL;
		p2->next = NULL;
		head = NULL;
		return head;
	}
	while(p1->num != 0)
	{
		p2 = p1;
		p1 = new Book;
		p2->next = p1;
		cout<< "请输入书的编号: ";
		cin >> p1->num;
		if(p1->num != 0)
		{
			cout << "请输入书的价格: ";
			cin >> p1->price;
		}
		
	}
	delete p1;
	p2->next = NULL;
	return head;
}

void showBook(Book* head)
{
	while(head)
	{
		cout << "编号: " << head->num << endl;
		cout << "价格: " << head->price << endl;
		head = head->next;
	}
}

void Delete(Book* head, int num)
{
	Book* l;
	//删除头结点
	if(head->num == num)
	{
		l = head;
		head = head->next;
		::head = head;//赋给全局的head
		delete l;
		cout << "操作成功" << endl;
		return;//退出该函数
	}
	//删除不是头结点的结点
	while(head)
	{
		if(head->next == NULL)//判断下个结点是否存在
		{
			cout << "找不到要删除的编号。" << endl;
			return;
		}
		if(head->next->num == num)
		{
			l = head->next;
			head->next = l->next;
			delete l;
			cout << "操作成功" << endl;
			return;
		}
		head = head->next;//head为当前结点的指针
	}
	cout << "找不到寻找的编号" << endl;
}
//插入函数(尾插法)
void insert(Book* head,int num, float price)
{
	Book* list = new Book;
	Book* l;
	while(head)
	{
		l =head;
		head = head->next;
	}
	l->next = list;
	list->num = num;
	list->price = price;
	list->next = NULL;
}
int main()
{
	//Book* head;
	head = create();
	showBook(head);
	cout << "请输入你要删除的图书编号：";
	int bookNum;
	cin >> bookNum;
	Delete(head, bookNum);
	showBook(head);
	cout << "请用户输入插入的图书编号：";
	cin >> bookNum;
	float price;
	cout << "请输入插入的图书的价格：";
	cin >> price;
	insert(head,bookNum,price);
	showBook(head);
	return 0;
}

