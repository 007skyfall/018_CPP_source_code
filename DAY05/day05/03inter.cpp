#include <iostream>
using namespace std;

class A{
	public:
		void func(void){
			cout << "A::func(void)" << endl;
		}
		void func(int data){
			cout << "A::func(int):" << data << endl;
		}
};
class B:public A{
	public:
	using A::func;
	void func(void){
		cout << "B::func(void)" << endl;
	}
};

int main()
{
	B b;
	b.func();  // 访问B类中的func成员函数
	b.A::func();  // 访问A类中的func成员函数
	b.A::func(10);

	b.func();
	b.func(20);

	return 0;
}
