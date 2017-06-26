#include <iostream>
#include "BMI.h"
using namespace std;

int main()
{
	BMI bmi1("Lin", 18, 145, 70);
	cout << "The BMI for " << bmi1.getName() << " is "
		<< bmi1.getBMI() << " " << bmi1.getStatus() << endl; 
	return 0;
}