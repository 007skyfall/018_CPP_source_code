#include <iostream>
using namespace std;

class A{
	public:
		A(int data)/*:m_data(data)*/{
			cout << "A::A(int)" << endl;
			m_data = data;
		}
		int m_data;
};

class B{
	public:
		B(int data):m_a(data){
			cout << "B::B(int)" << endl;
		}
		A m_a;
};

int main(){
	B b(10010);

	cout << b.m_a.m_data << endl;
	return 0;
}
