#include <iostream>
using namespace std;

class A{
	public:
		A(void){
			cout << "A::我是构造函数" << endl;
		}
		~A(void){
			cout << "A::我是析构函数" << endl;
		}
};

class B{
	public:
		B(void){
			cout << "B::我是构造函数" << endl;
		}
		~B(void){
			cout << "B::我是析构å½数" << endl;
		}
		A m_a;
};

int main()
{
	B b;

	return 0;
}
