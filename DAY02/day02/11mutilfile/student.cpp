#include "student.h"
// 需要添加累的作用域限定符”::“
Student::Student(const string& name,int age, int no)
{
	cout << "我是构造函数" << endl;
	m_name = name;
	m_age = age;
	m_no = no;
}
void Student::who(void){
	cout << "我叫" << m_name << endl;
	cout << "我今年" << m_age << "岁" << endl;
	cout << "我的学号" << m_no << endl;
}


