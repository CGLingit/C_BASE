#include <iostream>
#include <string>
using namespace std;

template<typename T>//TΪ���Ͳ���������ʹ�����в�ͬ�������Ͷ�����ҪΪÿ������������д����
void sort(T list[], int listSize)
{
	for(int i = 0; i < listSize; i++)
	{
        T currentMin = list[i];
	    int currentMinIndex = i;
		for (int j = i + 1; j < listSize; j++)
		{
			if (currentMin > list[j])
			{
				currentMin = list[j];
				currentMinIndex = j;
			}
		}
		if (currentMinIndex != i)
		{
			list[currentMinIndex] = list[i];
			list[i] = currentMin;
		}
	}
}

template<typename T>
void printArray(const T list[], int listSize)
{
	for (int i = 0; i < listSize; i++)
	{
		cout << list[i] << " ";
	}
	cout << endl;
}

int main()
{
	int list1[] = {1, 8, 3, 9, 7};//��������ʶ�������������int���Ӷ���int�滻���Ͳ���T
	sort(list1, 5);
	printArray(list1, 5);

	double list2[] = {1.0, 9.2, 5.2, 8.5, 2.0};
	sort(list2, 5);
	printArray(list2, 5);

	string list3[] = {"Lin", "Hu", "Tan", "He", "Ruan"};
	sort(list3, 5);
	printArray(list3, 5);
	return 0;
}
	