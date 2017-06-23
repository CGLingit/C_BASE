#ifndef LOAN_H
#define LOAN_H

class Loan
{
public:
	Loan();
	Loan(double rate, int years, double amoubt);
	double getAnnualInterestRate();//返回贷款的年利率
	int getNumberOfYears();//返回贷款年限
	double getLoanAmount();//返回贷款额度
	void setAnnualInterestRate(double rate);//设置贷款的年利率
	void setNumberOfYears(int years);//设置贷款年限
	void setLoanAmount(double amount);//设置贷款额度
	double getMonthlyPaymen();//返回月还款额
	double getTotalPayment();//返回总还额度

private:
	double annualInterestRate;
	int numbetOfYears;
	double loanAmount;
};

#endif