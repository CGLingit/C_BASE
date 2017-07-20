/*
因为jump()前面有关键字virtual，表示该函数是多种形态的
即函数可以被多个对象所拥有，而且功能不一，换句话说多个对象在调用同一名字的函数时
产生的效果也不一样。那么系统在执行到virtual时会自动判断是哪个对象调用了它，
然后调用该对象的同名函数。
*/

//#include <iostream>
//using namespace std;
//
//class Father
//{
//public:
//	virtual void jump() const {cout << "父亲可以跳5个台阶" << endl;}
//    //void jump() const {cout << "父亲可以跳5个台阶" << endl;}
//
//	void run() const {cout << "父亲可以跑1万米" << endl;}
//
//};
//
//class Son : public Father
//{
//public:
//	void jump() const {cout << "子类可以跳10个台阶" << endl;}
//	void run() const {cout << "子类可以跑10万米" << endl;}
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