#include <iostream>
using namespace std;
int main()
{
	/*int list[6] = {11, 12, 13, 14, 15, 16};

	for(int i = 0; i< 6; i++)
	{
		cout << "address: " << (list + i) << 
			" value: " << *(list + i) << " " <<
			" value: " << list[i] << endl;
	}*/

	char* city = "Dallas";
	char* cities[] = {"Dallas", "Altanta"};
	cout << cities[0] << endl;

	return 0;
}