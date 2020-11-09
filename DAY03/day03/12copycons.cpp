#include <iostream>
#include <cstring>
using namespace std;

class String{
	public:
		//构造函数
		String(const char *str = ""){
			m_str = new char[strlen(str) + 1];
			strcpy(m_str, str);
		}
		//析构函数
		~String(void){
			delete[] m_str;
			m_str = NULL;
		}
		// 拷贝构造函数
		String(const String& that){
			m_str = new char[strlen(that.m_str) + 1];
			strcpy(m_str, that.m_str);
		}

		const char * c_str(void){
			return m_str;
		}
	private:
		char *m_str;
};

int main()
{
	String s1("hello world");
	String s2(s1);

	cout << s1.c_str() << endl;
	cout << s2.c_str() << endl;


	return 0;
}
