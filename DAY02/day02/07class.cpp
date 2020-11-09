#include <iostream>
using namespace std;

class Student{
	public:
	void who(void){
		cout << "我叫" << m_name << endl;
		cout << "我今年" << m_age << "岁" << endl;
		cout << "我的学号" << m_no << endl;
	}
	public: // 不加public，默认为私有的，
	string m_name;
	int m_age;
	int m_no;
};


int main(void)
{
	Student stu1;
	stu1.m_name = "zhangsan";
	stu1.m_age = 25;
	stu1.m_no = 10086;
	stu1.who();
	return 0;
}
