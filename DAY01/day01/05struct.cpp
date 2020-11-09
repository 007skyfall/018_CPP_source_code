#include <iostream>
using namespace std;

struct A{
	int num;
	void print()
	{
		cout << num << endl;
	}
	
};


int main()
{
	struct A a;
	a.num = 200;
	a.print();
	A a1 = {300};
	a1.print();
	cout << sizeof(a) << endl;
	return 0;
}
