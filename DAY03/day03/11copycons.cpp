#include <iostream>
using namespace std;

class Integer{
	public:
		Integer(int data):m_data(new int(data)){
			cout << "我是构造函数" << endl;
		}
		~Integer(void){
			delete m_data;
			m_data = NULL;
			cout << "我是析构函数" << endl;
		}
		// 使用缺省的拷贝构造函数
		//Integer(const Integer& that):m_data(that.m_data){}
		// 显示定义拷贝构造函数 
		Integer(const Integer& that){
			m_data = new int(*that.m_data);
		
		}
		void show(){
			cout << "*m_data = " << *m_data << endl;
		
		}
	private:
		int *m_data;
};

int main()
{
	Integer i1(100);
	Integer i2(i1);

	i1.show();
	i2.show();
	return 0;
}
