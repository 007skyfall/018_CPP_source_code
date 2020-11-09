#include <iostream>
using namespace std;

class A{
	public:
		A(int data):m_data1(data){}
	void print(){
		cout << m_data2 << endl;
	}

		static int m_data;
		int m_data1;
	private:
		static int m_data2;
	
};
int A::m_data = 200;  // 定义并初始化
int A::m_data2 = 300;  // 定义并初始化
int main()
{
	A a(100);
	cout << a.m_data << endl;
	cout << A::m_data << endl;
	cout << sizeof(a) << endl;
	
	a.print();
	//cout << A::m_data2 << endl;
	
	A a1(2000);
	A a2(20000);
	a1.m_data = 10086;
	cout << a1.m_data << endl;
	cout << a2.m_data << endl;
	
	return 0;
}
