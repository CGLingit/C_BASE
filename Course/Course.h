#ifndef COURSE_H
#define COURSE_H
#include <string>
using namespace std;

class Course{
public:
	Course(const string& courseName, int capacity);
	~Course();
	string getCourseName() const;//只读成员函数
	void addStudent(const string& name);
	void dropStudent(const string& name);
	string* getStudents() const;
	int getNumberOfStdent() const;

private:
	string courseName;
	string* students;
	int numberOfStudents;
	int capacity;
};

#endif