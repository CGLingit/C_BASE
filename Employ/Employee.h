#include<string>
namespace Record{
	const int kDefaultStartingSalary = 30000;

	class Employee
	{
	public:
		Employee();
		void  promote(int inEaiseAmount = 1000);
		void demote(int inDemeritAmount = 1000);
		void hire();
		void fire();
		void display() const;
		void etFirstName(std::string inFirstName);
		std::string getFirstName() const;
		void setLastName(std::string inLastName);
		std::string getLatName() const;
		void setEmployeeNumber(int inEmployeeNumber);
		int getEmployeeNumber() const;
		void setSalary(int inNewSalary);
		int getSalary() const;
		bool getIsHired() const;

	protected:
		std::string mFirstName;
		std::string mLastName;
		int mEmployeeNuber;
		int mSalary;
		bool bHired;
	};
}