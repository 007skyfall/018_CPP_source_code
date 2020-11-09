#include <iostream>
using namespace std;

int main()
{
	bool b = true;
	cout << "b = " << b << endl;
	cout << "false = " << false << endl;

	int a = 100;
	b = a;
	cout << "b = " << b << endl;  // 1

	a = -100;
	b = a;
	cout << "b = " << b << endl;  // 1

	a = 0;
	b = a;
	cout << "b = " << b << endl;  // 0
	return 0;
}
