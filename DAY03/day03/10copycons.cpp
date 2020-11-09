#include <iostream>
using namespace std;

class A{
	public:
		A(int data):m_data(data){
			cout << "A::我是构造函数" << endl;
		}
		A(const A& that){
			m_data = that.m_data;
			cout << "A::我是拷贝构造函数" << endl;
		}
		int m_data;
};

class B{
	// ，缺省的析构函数，缺省的拷贝构造函数
	public:
	B(int data):m_a(data){}
	A m_a;
};

int main()
{
	B b(10086);
	B b1(b);

	cout << b1.m_a.m_data << endl;
	return 0;
}
