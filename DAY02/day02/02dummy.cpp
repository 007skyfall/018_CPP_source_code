#include <iostream>
using namespace std;
/*
void dummy(int x, int y)
{
	cout << "x = " << x << "y = " << y << endl;
}
*/
// 哑元参数
void dummy(int x, int)
{
	cout << "x = " << x << endl;
}



int main(void)
{
	dummy(100,200);
	return 0;
}
