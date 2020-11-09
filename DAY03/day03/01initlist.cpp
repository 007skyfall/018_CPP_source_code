#include <iostream>
using namespace std;

class Teacher{
	public:
	Teacher(const string name, int age):
		m_name(name),m_age(age){}
	Teacher(void):m_name("zhanshen"),m_age(30){}
	Teacher(const string name):m_name(name),m_age(20){}
	void who()
	{
		cout << m_name << m_age << endl;
	}
	private:
	string m_name;
	int m_age;
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
