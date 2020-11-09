#include <iostream>
using namespace std;

class Parent{
	public:
	Parent(void){
		cout << "Parent(void)" << endl;
	}
	Parent(const string& name):m_name(name)
	{
		cout << "Parent(const string&)" << endl;
	}

	void print(){
		cout << m_name << endl;
	}

	private:
	string m_name;

};

class Child:public Parent{
	public:
	Child(void){
		cout << "Child(void)" << endl;
	}
	Child(const string& name):Parent(name){
		cout << "Child(const string&)" << endl;
	}
};


int main()
{
	Child c;

	Child c1("猪八戒");
	c1.print();
	return 0;
}
