#include "iostream"
using namespace std;

class counter{
	public:
		counter(int data,int count):m_data(data),m_count(count){}
		
		void func(void){}

		void print(void) const {
			cout << "常版本" << endl;
			//cout << m_data++ << endl;  // 编译报错
			cout << m_data << endl;
			cout << ++m_count << endl;
		}
		void print(void){
			cout << "非 常版本" << endl;
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
	cou.print();   // 非常版本

	const counter cou1(200,200); // 常对象
	cou1.print();  // 常版本
	// cou1.func();  // 编译报错
	
	const counter& cou2 = cou;
	cou2.print();  // 常版本
	
	const counter* cou3 = new counter(100,100);
	cou3->print();   // 常版本
	delete cou3;
	cou3 = NULL;

	return 0;
}
