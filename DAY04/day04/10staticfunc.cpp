#include <iostream>
using namespace std;

class Integor{
	public:
	Integor(int data):m_int1(data){}
	
	void print2(void){
		cout << m_int1 << endl;
		cout << m_int2 << endl;
	}

	static void print1(void)/*const报错*/{
		//cout << m_int1 << endl; // 编译报错
		cout << m_int2 << endl;
	}

	private:
		int m_int1;
		static int m_int2;
};

int Integor::m_int2 = 10010;

int main()
{
	Integor int1(10086);
	int1.print2();//非静态成员函数
	cout << "************" << endl;
	int1.print1();  // 静态成员函数

	return 0;
}
