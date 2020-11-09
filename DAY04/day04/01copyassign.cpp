#include <iostream>
using namespace std;

class A{
	public:
		A(int data):m_data(data){}

		A& operator=(const A& that)
		{
			cout << "我是拷贝赋值函数" << endl;
			if(this != &that)
			{
				m_data = that.m_data;
			}
			return *this;
		}

		void print(){
			cout << "m_data = " << m_data << endl;
		}
	private:
		int m_data;
};

int main()
{
	A a1(100);
	a1.print();  // 100
	A a2(200);
	a1 = a2;
	a1.print();  // 200
	a2.print();  // 200

	return 0;
}
