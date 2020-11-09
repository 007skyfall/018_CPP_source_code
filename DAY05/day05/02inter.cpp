#include <iostream>
using namespace std;

class Human{
	public:
		Human(const string& name,int age, int id):
			m_name(name),m_age(age),m_id(id){}
		void eat(const string& food){
			cout << "我吃" << food << endl; 
		}
		void sleep(int time){
			cout << "我睡" << time << "小时" << endl;
		}
		void id(){
			cout << "我的ID是" << m_id << endl;
		}	
		void who(){
		cout << "我是" << m_name << ',' << 
	  	"我的年龄是" << m_age << "岁," << endl;
	}

	protected:
		string m_name;
		int m_age;
	private:
		int m_id;
};

class Student:public Human/*继承表*/{
	public:
	// 子类中使用初始化表的方式，初始化基类中的成员，
	// 初始化表固定写法
	Student(const string& name,int age,int id,int no):
	Human(name,age,id),m_no(no){}

	void learn(const string& study){
		cout << "我学习" << study << endl;
	}

	void who(){
		cout << "我是" << m_name << ',' << 
	  	"我的年龄是" << m_age << "岁," <<
		"我的学号是" << m_no << endl;
		id();
	}

	private:
		int m_no;
};
class Teacher:public Human{
	public:
		Teacher(const string& name, int age,int id, int salary):
		m_salary(salary),Human(name,age,id){}

		void teach(const string & course){
			cout << "我教" << course << endl;
		}
		void who(){
			cout << "我是" << m_name << ',' << 
		  	"我的年龄是" << m_age << "岁," <<
			"我的工资是" << m_salary << endl;
			id();
		}

	private:
		int m_salary;
};



int main()
{
	Teacher tea("唐三藏", 30, 1, 10000);
	tea.who();
	tea.teach("C++");
	tea.eat("小葱拌豆腐");
	tea.sleep(6);

	Student stu("孙悟空",1000, 2, 100001);
	stu.who();
	stu.learn("c++");
	stu.eat("烤鸭");
	tea.sleep(4);

	// 由Student* 到Human*, 这个过程叫做向上造型
	Human *man = &stu;  // 完成隐士类型转换
	man->eat("苹果");
	man->sleep(10);
	man->who();
	man->id();
	
	// 由Human* 到Student*,这个过程叫做向上造型，
	Student *stu1 = (Student*)(man);  // 必须显示的完成类型转换
	stu1->who();

	// 由Human* 到Student*,这个过程叫做向上造型，
	Human women("白骨精", 500, 38);
	Teacher *tea1 =(Teacher*)(&women);
	tea1->who(); // 访问了非法地址空间，结果不可预知

	return 0;
}
