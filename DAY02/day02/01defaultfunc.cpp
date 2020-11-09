#include <iostream>
using namespace std;
/*  // 缺省值
void func(int x, int y = 100)
{
	cout << "x = " << x << " y = " << y << endl;
}*/
/* // 靠右原则
void func(int x, int z, int y = 100)
{
	cout << "x = " << x << " y = " << y << endl;
	cout << "z = " << z << endl;
}
*/
void func(int x, int z, int y = 100);  // 函数声明
int main()
{
	func(100,200,300);
	func(100,200);
//	func(100);
	return 0;
}
void func(int x, int z, int y)  // 函数定义
{
	cout << "x = " << x << " y = " << y << endl;
	cout << "z = " << z << endl;
}
