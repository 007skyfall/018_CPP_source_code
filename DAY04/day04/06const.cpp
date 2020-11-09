#include "iostream"
using namespace std;

class counter{
	public:
		counter(int data,int count):m_data(data),m_count(count){}
		
		void func(void){}

		void print(void) const {
			//cout << m_data++ << endl;  // 编译报错
			cout << m_data << endl;
			cout << ++m_count << endl;
		}
	private:
		int m_data;
		mutable int m_count;

};


int main()
{
	counter cou(100,100);  // 非常对象
	cou.print();

	const counter cou1(200,200); // 常对象
	cou1.print();
	// cou1.func();  // 编译报错
	return 0;
}
