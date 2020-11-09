#include <iostream>
using namespace std;

class Interge{
	public:
		Interge(string name,int data,int data1):m_name(name),m_data(data),m_data1(data1){
			/*m_data = data; // 编译报错
			m_data1 = data1;*/
		}
		void show(void)
		{
			cout << "m_data = " << m_data <<endl;
			cout << "m_data1 = " << m_data1 <<endl;
			cout << "m_name = " << m_name <<endl;
		}

	private:
		string &m_name;
		int &m_data;
		const int m_data1;
};

int main()
{
	Interge i("zhoukai",100,200);
	i.show();
	return 0;
}
