#include <iostream>
using namespace std;

void func(double x, ...)
{
	cout << "func(double, ...)" << endl;
}
void func(int y, int x)
{
	cout << "func(int ,int )" << endl;
}


int main()
{
	double a = 50.3;
	int b = 100;
	func(a,b);
	return 0;
}

