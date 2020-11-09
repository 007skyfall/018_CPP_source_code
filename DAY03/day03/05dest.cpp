#include <iostream>
using namespace std;

class Teacher{
	public:
	// 构造函数，构造函数的重载版本
	Teacher(const string name, int age):
		m_name(name),m_age(new int(age)){}
	Teacher(void):m_name("zhanshen"),m_age(new int(30)){}
	Teacher(const string name):m_name(name),m_age(new int(20)){}
	// 析构函数	
	~Teacher(void){
		cout << "我是析构函数" << endl;
		delete m_age;
		m_age = NULL;
	}

	void who()
	{
		cout << m_name << *m_age << endl;
	}
	private:
	string m_name;
	int *m_age;
};

int main()
{
	Teacher t1("zhoukai",18);
	Teacher t2;
	Teacher t3("xiaohan");
	t1.who();
	t2.who();
	t3.who();
	return 0;

}
