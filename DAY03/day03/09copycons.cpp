#include <iostream>
using namespace std;

class A{
	public:
		// 构造函数
		A(int data,int data1):m_data(data),m_data1(data1){
			cout << "我是构造函数" << endl;
		}
		// 拷贝构造函数,使用缺省的拷贝构造函数
		/*
		A(const A& that){
			cout << "我是拷贝构造函数" << endl;
			m_data = that.m_data;
			m_data1 = that.m_data1;
		}*/
		int m_data;
		int m_data1;
};


int main()
{
	A a1(100,200);// 调用构造函数
	A a2(a1); // 调用拷贝构造函数

	cout << "a2.m_data = " << a2.m_data << endl;
	cout << "a2.m_data1 = " << a2.m_data1 << endl;
	return 0;
}
