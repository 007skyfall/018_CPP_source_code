#include <iostream>
using namespace std;

class Student{
	public:
		Student(const string& name,int age, int no)
		{
			cout << "我是构造函数" << endl;
			m_name = name;
			m_age = age;
			m_no = no;
		}
	void who(void){
		cout << "我叫" << m_name << endl;
		cout << "我今年" << m_age << "岁" << endl;
		cout << "我的学号" << m_no << endl;
	}
	/*
	 * 私有的成员在累的外部不可以直接访问，
	 * 可以封装成公有接口函数，间接对私有成员进行初始化
	 * */
	void setName(const string& name)
	{
		m_name = name;
	}
	void setAge(int age)
	{
		m_age = age;
	}
	void setNo(int no)
	{
		m_no = no;
	}

	private: // 不加public，默认为私有的，
	string m_name;
	int m_age;
	int m_no;
};


int main(void)
{
	//Student stu1;
	/*
	stu1.m_name = "zhangsan";
	stu1.m_age = 25;
	stu1.m_no = 10086;
	*/
	/*
	stu1.setName("lisi");
	stu1.setAge(26);
	stu1.setNo(10010);
	*/

	//stu1.who();
	// 实例化对象时，自动调用构造函数	
	// 第一种：使用构造函数初始化成员的方式
	Student stu2("wangermazi",30,10001);  // 常用
	Student stu3 = Student("ruhua",18,9527);
	
	stu2.who();
	stu3.who();

	Student *stu4 = new Student("后裔",5000, 110);
	stu4->who();

	delete stu4;
	stu4 = NULL;



	return 0;
}
