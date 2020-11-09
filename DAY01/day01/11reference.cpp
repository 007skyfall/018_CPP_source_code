#include <iostream>
using namespace std;

void swap(int& x, int& y)
{
	x = x ^ y;
	y = x ^ y;
	x = x ^ y;

}
int main()
{
	int a = 100, b = 200;
	swap(a, b);
	cout << "a = " << a << "b = " << b << endl;
	
	const int& c = a;

//	c = 300;  // 不可以修改，编译报错。
	a = 300;

	return 0;
}
