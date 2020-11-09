#include <iostream>
using namespace std;

class Complex{
	public:
	Complex(int r, int i):m_r(r),m_i(i){}
	// const 作用 不允许修改成员变量
	void print(void)const{
		cout << m_r << '+' << m_i << 'i' << endl;
	}
	/*
	 * 第一个：const：返回结果只能是一个右值
	 * 第二个const：右操作数，既可以是左值，也可以是右值
	 * 第三个const：左操作数，既可以是左值，也可以是右值
	 * */
	const Complex operator+(const Complex& that)const{
		return (Complex((m_r+that.m_r), (m_i+that.m_i)));
	}
	const Complex add(const Complex& that)const{
		return (Complex((m_r+that.m_r), (m_i+that.m_i)));
	}
	private:
	int m_r; // 实部
	int m_i; // 虚部
};
int main()
{
	const Complex c1(1,3);   //  1 + 3i
	c1.print();
	const Complex c2(2,4);   //  2 + 4i
	c2.print();

	Complex c3 = c1 + c2;
	// Complex c3 = c1.operator+(c2);
	c3.print();
	
	Complex c4 = c1.add(c2);
	c4.print();

	//c1+c2 = c3;
	//c2 = c1;


	return 0;
}
