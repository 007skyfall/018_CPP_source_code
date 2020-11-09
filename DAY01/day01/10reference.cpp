#include <iostream>
using namespace std;

int main()
{

	int a = 100;
	int a1 = 200;
	char ch = 50;
	
	int &b = a;
	//int &c = c;//编译器报错  类型不一致
	b = a1;  // 进行赋值操作

	cout << "a = " << a << endl; // 100 
	cout << "b = " << b << endl; // 100 
	
	b = 200; // 修改引用的值
	cout << "a = " << a << endl; // 200
	cout << "b = " << b << endl; // 200

	cout << "&a = " << &a << endl;
	cout << "&b = " << &b << endl;

	return 0;
}
