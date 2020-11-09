#include <iostream>
using namespace std;

class A{
	public:
	A(void){	
		cout << "A类构造函数" << endl;
	}
	void show()
	{
		cout << m_data << endl;
	}
	private:
		int m_data;
};

class B{
	public:
	void show()
	{
		cout << b_data << endl;
	}
	B(void){
		cout << "B累构造函数" << endl;
	}
	private:
		A a;
		int b_data;
};

int main()
{
	B b;
	b.show();
	return 0;
}
