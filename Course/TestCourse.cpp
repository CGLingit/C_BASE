#include "Course.h"
#include <iostream>
using namespace std;

int main()
{
	Course course1("Data Structures", 10);
	Course course2("Darabast Systems", 15);

	course1.addStudent("Peter Jones");
	course1.addStudent("Ray Allen");

	cout << "Number of students in course1: "
		<< course1.getNumberOfStdent() << "\n";
	string* students = course1.getStudents();
	for (int i = 0;i < course1.getNumberOfStdent(); i++)
	{
		cout << students[i] << ", ";
	}
	return 0;
}