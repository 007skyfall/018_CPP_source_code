#include <iostream>
using namespace std;
class Human{
	public:
	Human(const string& name, int age){
		this->m_name = name;
		this->m_age = age;
	}
	~Human(void){
		cout << "析构函数" << endl;
	}

	void print(void)
	{
		cout << m_name << endl;
		cout << this->m_age << endl;
		cout << "this = " << this << endl;
	}
	Human& add(void)
	{
		++m_age;
		return *this;
	}
	void destroy(void){
		delete this;
	}

	private:
		string m_name;
		int m_age;
};


int main()
{
	Human  man("zhanshen",30);
	man.print();
	cout << "&man = " << &man << endl;
	
	man.add();  // 31
	man.print();
	
	man.add().add().add().add();//35
	man.print();

	Human *women = new Human("zhoukai",18);
	women->print();
	women->destroy();


	return 0;
}
