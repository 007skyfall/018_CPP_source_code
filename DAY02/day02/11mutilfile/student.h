#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <iostream>
using namespace std;

class Student{
	public:
		Student(const string& name,int age, int no);
		void who(void);

	private: // 不加public，默认为私有的，
	string m_name;
	int m_age;
	int m_no;
};

#endif  //__STUDENT_H__


