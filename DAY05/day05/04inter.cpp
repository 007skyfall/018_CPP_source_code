#include <iostream>
using namespace std;

class A {
	public:
		void init(int x, int y, int z){
			m_public = x;
			m_protected = y;
			m_private = z;
		}
	public:
		int m_public;

	protected:
		int m_protected;
	private:
		int m_private;

};
class B:public A{
	public:
	void print(){
		cout << m_public << endl;
		cout << m_protected << endl;
	//	cout << m_private << endl;
	}
};
class C:protected A{
	public:
	void print(){
		cout << m_public << endl;
		cout << m_protected << endl;
	//	cout << m_private << endl;
	}
};
class D:private A{
	public:
	void print(){
		cout << m_public << endl;
		cout << m_protected << endl;
	//	cout << m_private << endl;
	}
};





int main()
{

	B b;
	b.init(10,20,30);
	b.print();
	
	C c;
//	c.init(100,200,300);
	c.print();

	D d;
	//cout << d.m_public << endl;

	return 0;
}
