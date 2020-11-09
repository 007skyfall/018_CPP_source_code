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

	private: // 不加public，默认为私有的，
	string m_name;
	int m_age;
	int m_no;
};


int main(void)
{

	//stu1.who();
	// 实例化对象时，自动调用构造函数	
	// 第一种：使用构造函数初始化成员的方式
	Student stu2("wangermazi",30,10001);  // 常用
	Student stu3 = Student("ruhua",18,9527);
	
	stu2.who();
	stu3.who();

	Student stu5[2] = {Student("吕布", 4000, 119),
						Student("貂蝉", 3999, 120)	
					};
	stu5[0].who();
	stu5[1].who();

	Student *stu4 = new Student("后裔",5000, 110);
	stu4->who();

	delete stu4;
	stu4 = NULL;

	Student *stu6 = new Student[2]{
					Student("百里玄策",2000, 114),
					Student("百里守约",2001, 115)
					};
	stu6[0].who();
	stu6[1].who();

	stu6->who();
	(stu6+1)->who();
	delete[] stu6;
	stu6 = NULL;


	return 0;
}
