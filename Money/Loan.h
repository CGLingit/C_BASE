#ifndef LOAN_H
#define LOAN_H

class Loan
{
public:
	Loan();
	Loan(double rate, int years, double amoubt);
	double getAnnualInterestRate();//���ش����������
	int getNumberOfYears();//���ش�������
	double getLoanAmount();//���ش�����
	void setAnnualInterestRate(double rate);//���ô����������
	void setNumberOfYears(int years);//���ô�������
	void setLoanAmount(double amount);//���ô�����
	double getMonthlyPaymen();//�����»����
	double getTotalPayment();//�����ܻ����

private:
	double annualInterestRate;
	int numbetOfYears;
	double loanAmount;
};

#endif