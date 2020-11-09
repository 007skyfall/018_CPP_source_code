#include <iostream>
using namespace std;

void func(int x, int y)
{
	cout << "func(int,int)" << endl;
}
void func(const short x, int y)
{
	cout << "func(const short,int)" << endl;
}
/*  这个函数和上边的函数不构成重载关系
void func(short x, int y)
{
	cout << "func(short,int)" << endl;
}
*/

int main()
{
	short a = 50;
	int b = 100;
	func(a, b);
	return 0;
}

