///*链表*/
//
//#include <iostream>
//using namespace std;
//
//class book
//{
//public:
//	int num;
//	int price;
//	book* next;
//};
//
//int main()
//{
//	book book1, book2, book3;
//	book* head;
//	book1.num = 1;
//	book1.price = 100;
//	book2.num = 2;
//	book2.price = 200;
//	book3.num = 3;
//	book3.price = 300;
//
//	head = &book1;//把book1的地址赋给head（头指针）
//	book1.next = &book2;
//	book2.next = &book3;
//	book3.next = NULL;
//	return 0;
//}