#include <iostream>
using namespace std;

void func(int x)
{
	cout << "func(int)" << endl;
}


void func(char c)
{
	cout << "func(char)" << endl;
}

void func(char c, char h)
{

	cout << "func(char,char)" << endl;
}

void func(short c)
{
	cout << "func(short)" << endl;
}
int main()
{
	int a = 100;  // 完全匹配
//	func(a);  // func(int)
	//func(short(a));   //编译报错   int  --》 short 
	short b = 200;  // 升级匹配
	//func(b);  // func(int)
	func(b);




	return 0;
}
