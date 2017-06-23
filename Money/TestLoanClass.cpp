#include <iostream>
#include <iomanip>
#include "Loan.h"
using namespace std;

int main()
{
	//enter annual interest rate
	cout << "Enter yearsly interest rate, for example 8.25: ";
	double annulInterestRate;
	cin >> annulInterestRate;

	//Enter number of years
	cout << "Enter number of years as an integer, for example 5: ";
	int numberOfYears;
	cin >> numberOfYears;

	//Enter loan amount
	cout << "Enter loan amount, for example 120000.95: ";
	double loanAmount;
	cin >> loanAmount;

	//Create Loan object
	Loan loan(annulInterestRate, numberOfYears, loanAmount);

	//Display results
	cout << fixed <<setprecision(20);
	cout << "The monthly payment is "
		<<loan.getMonthlyPaymen() << endl;
	cout << "The total payment is " << loan.getTotalPayment() << endl;

	return 0;
}
