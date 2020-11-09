#include <iostream>
using namespace std;

class Human{
	public:
		Human(const string& name,int age):
			m_name(name),m_age(age)	{}
		void eat(const string& food){
			cout << "我吃" << food << endl; 
		}
		void sleep(int time){
			cout << "我睡" << time << "小时" << endl;
		}
	protected:
		string m_name;
		int m_age;
};

class Student:public Human/*继承表*/{
	public:
	// 子类中使用初始化表的方式，初始化基类中的成员，
	// 初始化表固定写法
	Student(const string& name,int age,int no):
	Human(name,age),m_no(no){}

	void learn(const string& study){
		cout << "我学习" << study << endl;
	}

	void who(){
		cout << "我是" << m_name << ',' << 
	  	"我的年龄是" << m_age << "岁," <<
		"我的学号是" << m_no << endl;
	}

	private:
		int m_no;
};
class Teacher:public Human{
	public:
		Teacher(const string& name, int age,int salary):
		Human(name,age),m_salary(salary){}

		void teach(const string & course){
			cout << "我教" << course << endl;
		}
		void who(){
			cout << "我是" << m_name << ',' << 
		  	"我的年龄是" << m_age << "岁," <<
			"我的工资是" << m_salary << endl;
		}

	private:
		int m_salary;
};



int main()
{
	Teacher tea("唐三藏", 30, 10000);
	tea.who();
	tea.teach("C++");


	Student stu("孙悟空",1000, 100001);
	stu.who();
	stu.learn("c++");

	return 0;
}
