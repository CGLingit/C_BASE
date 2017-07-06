#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<int> intVector;//定义一个向量
	for (int i = 0; i < 10; i++)
	{
		intVector.push_back(i + 1);
	}

	cout << "Numbers in the vector: ";
	for (int i = 0; i < intVector.size(); i++)
	{
		cout << intVector[i] << " ";
	}

	vector<string> stringVector;
	stringVector.push_back("Dallas");
	stringVector.push_back("Houston");
	stringVector.push_back("Austin");
	stringVector.push_back("Norman");

	cout << "\nStrings in the string vector: ";
	for (int i = 0; i < stringVector.size(); i++)
	{
		cout << stringVector[i] << " ";
	}

	stringVector.pop_back();//remove the last element

	vector<string> v2;
	v2.swap(stringVector);
	v2[0] = "Atlanta";

	cout << "\nString in thi vector v2: ";
	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2.at(i) << " ";//at函数获取向量的元素
	}
	return 0;
}