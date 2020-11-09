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
	~Parent(void){
		cout << "~Parent(void)" << endl;
		print();
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
	~Child(void){
		cout << "~Child(void)" << endl;
	}

};


int main()
{
	Child c;

	Child c1("猪八戒");
	c1.print();

	// 对象在栈区是调用析构函数时机
	// 对象在堆取时调用析构函数的时机
	
	Child *c2 = new Child("沙增");
	c2->print();
	delete c2;
	c2 = NULL;


	return 0;
}
