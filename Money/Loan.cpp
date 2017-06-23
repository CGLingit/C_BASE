#include "Loan.h"
#include <cmath>
using namespace std;

Loan::Loan()
{
	annualInterestRate = 8.5;
	numbetOfYears = 30;
	loanAmount = 100000;
}

Loan::Loan(double rate, int years, double amount)
{
	annualInterestRate = rate;
	numbetOfYears = years;
	loanAmount = amount;
}

double Loan::getAnnualInterestRate()
{
	return annualInterestRate;
}

int Loan::getNumberOfYears()
{
	return numbetOfYears;
}

double Loan::getLoanAmount()
{
	return loanAmount;
}

void Loan::setAnnualInterestRate(double rate)
{
	annualInterestRate = rate;
}

void Loan::setNumberOfYears(int years)
{
	numbetOfYears = years;
}

void Loan::setLoanAmount(double amount)
{
	loanAmount = amount;
}

double Loan::getMonthlyPaymen()
{
	double monthlyInterestRate = annualInterestRate / 1200;
	return loanAmount * monthlyInterestRate / (1-(pow(1 / (1 + monthlyInterestRate), numbetOfYears * 12)));
}

double Loan::getTotalPayment()
{
	return getMonthlyPaymen() * numbetOfYears * 12;
}