#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	fstream inout;
	inout.open("city.txt", ios::out);
	
	//write
	inout << "Dallas" << " " << "Houston" << " " << "Atlanta" << " ";
	inout.close();

	//append to the file
	inout.open("city.txt", ios::out | ios::app);
	
	//write cities
	inout << "Savannah" << " " << "Austin" << " " << "Chicago";
	inout.close();

	string city;

	//open file
	inout.open("city.txt", ios:: in);
	while(!inout.eof())
	{
		inout >> city;
		cout << city << " ";
	}

	inout.close();

	return 0;
}