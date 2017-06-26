#include <iostream>
#include "StackOfIntegers.h"
using namespace std;

int main()
{
	StackOfIntegers s;
	for(int i = 0; i < 10; i++)
		s.push(i);
	while(!s.isEmpty())
		cout << s.pop() << " "; 
	return 0;
}