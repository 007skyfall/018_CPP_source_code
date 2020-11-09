#include <iostream>
using namespace std;


class Teacher{
	public:
	Teacher(const string& name, 
			const string& sex,
			const string& teach){
		m_name = name;
		m_sex = sex;
		m_teach = teach;
	}
	Teacher(const string& name, 
			const string& sex){
		m_name = name;
		m_sex = sex;
		m_teach = "linux驱动";
	}
	Teacher(const string& name){
		m_name = name;	
		m_sex = "女";
		m_teach = "C基础";
	}

	void display(void)
	{
		cout << "老师姓名：" << m_name << endl;
		cout << "老师性别：" << m_sex << endl;
		cout << "老师讲授：" << m_teach << endl;
	}

	private:
	string m_name;
	string m_sex;
	string m_teach;
};
int main()
{
	Teacher t1("小周", "男", "C++");
	Teacher t2("战神", "男");
	Teacher t3("小韩");
	t1.display();
	t2.display();
	t3.display();
	return 0;
}
