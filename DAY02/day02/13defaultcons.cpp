#include <iostream>
using namespace std;

class A{
	public:
	void show()
	{
		cout << m_name << endl;
		cout << m_data << endl;
	}
	private:
		string m_name;
		int m_data;
};

int main()
{
	A a;
	a.show();
	return 0;
}
