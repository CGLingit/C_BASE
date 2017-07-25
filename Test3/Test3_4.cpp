/*�Լ��ö�̬����*2*/

#include <iostream>
using namespace std;

class Book
{
public:
	int num;//����
	float price;//��۸�
	Book* next;//ָ���¸�����ָ��
};

Book* head = NULL;//����ͷָ��Ϊ��

Book* create() //���ڴ�����̬�б�
{
	Book* p1;//ָ���¸�����ָ��
	Book* p2;//ָ��ǰ����ָ��
	p1 = new Book;//������һ����㣬����p1ָ����
	head = p1;
	p2 = p1;//��ʱhead,p1,p2����ָ�붼ָ���һ�����

	cout<< "��������ı��: ";
	cin >> p1->num;
	if(p1->num != 0)
	{
		cout << "��������ļ۸�: ";
		cin >> p1->price;
	}
	else                    //������Ϊ0ʱ��һ�лص����κβ�����״̬
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
		cout<< "��������ı��: ";
		cin >> p1->num;
		if(p1->num != 0)
		{
			cout << "��������ļ۸�: ";
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
		cout << "���: " << head->num << endl;
		cout << "�۸�: " << head->price << endl;
		head = head->next;
	}
}

void Delete(Book* head, int num)
{
	Book* l;
	//ɾ��ͷ���
	if(head->num == num)
	{
		l = head;
		head = head->next;
		::head = head;//����ȫ�ֵ�head
		delete l;
		cout << "�����ɹ�" << endl;
		return;//�˳��ú���
	}
	//ɾ������ͷ���Ľ��
	while(head)
	{
		if(head->next == NULL)//�ж��¸�����Ƿ����
		{
			cout << "�Ҳ���Ҫɾ���ı�š�" << endl;
			return;
		}
		if(head->next->num == num)
		{
			l = head->next;
			head->next = l->next;
			delete l;
			cout << "�����ɹ�" << endl;
			return;
		}
		head = head->next;//headΪ��ǰ����ָ��
	}
	cout << "�Ҳ���Ѱ�ҵı��" << endl;
}
//���뺯��(β�巨)
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
	cout << "��������Ҫɾ����ͼ���ţ�";
	int bookNum;
	cin >> bookNum;
	Delete(head, bookNum);
	showBook(head);
	cout << "���û���������ͼ���ţ�";
	cin >> bookNum;
	float price;
	cout << "����������ͼ��ļ۸�";
	cin >> price;
	insert(head,bookNum,price);
	showBook(head);
	return 0;
}

