#include <iostream>
using namespace std;

class Student{
	public: // 不加public，默认为私有的，
	string m_name;


};


int main(void)
{
	Student stu1;
	stu1.m_name = "zhangsan";
	return 0;
}
